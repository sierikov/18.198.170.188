int main() {
    stack[-8] = r12;
    stack[-16] = rbp;
    stack[-24] = rbx;
    rbx = 0x0;
    rsp = rsp - 0xaa8;
    var_908 = rep intrinsic_movsd(var_908, *0x400b40);
    var_6F4 = rep intrinsic_movsd(var_6F4, *0x400d80);
    do {
            rdi = *(int32_t *)(rsp + rbx + 0x3b4);
            rdi = rdi ^ *(int32_t *)(rsp + rbx + 0x1a0);
            rbx = rbx + 0x4;
            putchar(rdi);
    } while (rbx != 0x214);
    putchar(0x20);
    getline(&var_AA8, &var_AA0, *stdin@@GLIBC_2.2.5);
    if (strcmp(0x400b04, var_AA8) != 0x0) {
            puts("You selected no. Quitting.");
    }
    else {
            var_A98 = rep intrinsic_movsd(var_A98, *0x400fc0);
            rbx = 0x0;
            var_9D0 = rep intrinsic_movsd(var_9D0, *0x4010c0);
            rbp = malloc(0x32);
            do {
                    rdi = rbp + rbx;
                    rbx = rbx + 0x1;
                    sprintf(rdi, 0x400b22);
            } while (rbx != 0x32);
            rbx = 0xa;
            rbp = system(rbp);
            printf("Deleting all files...");
            fflush(*stdout@@GLIBC_2.2.5);
            do {
                    sleep(0x1);
                    putchar(0x2e);
                    fflush(*stdout@@GLIBC_2.2.5);
                    rbx = rbx - 0x1;
            } while (rbx != 0x0);
            rbx = 0x64;
            do {
                    usleep(0x4e20);
                    putchar(0x2e);
                    fflush(*stdout@@GLIBC_2.2.5);
                    rbx = rbx - 0x1;
            } while (rbx != 0x0);
            COND = rbp == 0x0;
            rbx = &var_4E0;
            rbp = &var_27C;
            if (!COND) {
                    *(int32_t *)rbx = rep intrinsic_movsd(*(int32_t *)rbx, *0x4011c0);
                    r12 = 0x0;
                    *(int32_t *)rbp = rep intrinsic_movsd(*(int32_t *)rbp, *0x4013c0);
                    do {
                            rdi = *(int32_t *)(rbp + r12);
                            rdi = rdi ^ *(int32_t *)(rbx + r12);
                            r12 = r12 + 0x4;
                            putchar(rdi);
                    } while (r12 != 0x1d4);
            }
            else {
                    *(int32_t *)rbx = rep intrinsic_movsd(*(int32_t *)rbx, *0x4015c0);
                    r12 = 0x0;
                    *(int32_t *)rbp = rep intrinsic_movsd(*(int32_t *)rbp, *0x401840);
                    do {
                            rdi = *(int32_t *)(rbp + r12);
                            rdi = rdi ^ *(int32_t *)(rbx + r12);
                            r12 = r12 + 0x4;
                            putchar(rdi);
                    } while (r12 != 0x264);
            }
    }
    return 0x0;
}
