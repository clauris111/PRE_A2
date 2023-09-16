//Clara de Lima Adriano
#include <stdio.h>

int main() {
    float hora_usuario;

    printf("Digite uma hora (no formato hora.minuto): ");
    scanf("%f", &hora_usuario);

    int horas = (int)hora_usuario;  
    int minutos = (int)((hora_usuario - horas) * 100);  

    if (horas < 0 || horas > 23 || minutos < 0 || minutos > 59) {
        printf("Hora ou minutos invalidos.\n");
        return 1;  
    }

    int minutos_totais = horas * 60 + minutos;
    int segundos = minutos_totais * 60;

    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Minutos totais: %d\n", minutos_totais);
    printf("Segundos totais: %d\n", segundos);

    return 0;
}
