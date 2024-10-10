#include <stdio.h>
#include <math.h>

int main() {
    float Px, Py, Pz;  // Coordenadas do ponto P
    float A_x, A_y, A_z;  // Coordenadas de um ponto A da reta
    float vx, vy, vz;  // Vetor diretor da reta (coeficiente de t nas equações de x, y e z, respectivamente)

    printf("===============================================");

    printf("\nAchar a distancia do ponto P a reta r.\n");

    printf("===============================================");

    // Entrada dos valores pelo usuário
    printf("\nDigite as coordenadas do ponto P (x, y, z): ");
    scanf("%f %f %f", &Px, &Py, &Pz);

    printf("\nDigite um ponto A na reta (x, y, z): ");
    scanf("%f %f %f", &A_x, &A_y, &A_z);

    printf("\nDigite o vetor diretor da reta (vx, vy, vz): ");
    scanf("%f %f %f", &vx, &vy, &vz);

    printf("===============================================");

    // Calculando o vetor PA
    float PA_x = A_x - Px;
    float PA_y = A_y - Py;
    float PA_z = A_z - Pz;

    // Calculando o produto vetorial PA x v
    float cross_x = PA_y * vz - PA_z * vy;
    float cross_y = PA_z * vx - PA_x * vz;
    float cross_z = PA_x * vy - PA_y * vx;

    // Calculando a magnitude do produto vetorial |PA x v|
    float cross_magnitude = sqrt(cross_x * cross_x + cross_y * cross_y + cross_z * cross_z);

    // Calculando a magnitude do vetor diretor |v|
    float v_magnitude = sqrt(vx * vx + vy * vy + vz * vz);

    // Calculando a distância d = |PA x v| / |v|
    float distance = cross_magnitude / v_magnitude;

    // Exibindo o resultado
    printf("\nA distancia do ponto P a reta e: %.3f\n", distance);

    printf("\n===============================================");

    return 0;
}