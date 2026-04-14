@interface BYPersonalizationOperation : BYOperation

- (id)description;
- (void)main;
- (BOOL)required;
- (id)_dataWithRandomBytesOfLength:(unsigned long long)a0;
- (void)_personalizeWithSSO:(id)a0;
- (id)_authenticateWithAppleConnect;
- (int)_configureAMAI:(struct __AMAuthInstall { } *)a0 chip:(struct _img4_chip_instance { unsigned short x0; struct _img4_chip *x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned long long x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; unsigned int x15; BOOL x16; })a1 snuf:(id)a2 sso:(id)a3 uuid:(id)a4 entries:(out id *)a5;

@end
