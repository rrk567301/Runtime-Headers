@class NSData;

@interface PKMutableReceipt : PKReceipt {
    NSData *_bomData;
}

- (void)dealloc;
- (id)_BOM;
- (char)_writeToDirectory:(id)a0 forSystemContent:(char)a1 error:(id *)a2;
- (id)initWithPackageIdentifier:(id)a0 packageVersion:(id)a1 BOMData:(id)a2;
- (id)initWithPackageIdentifier:(id)a0 packageVersion:(id)a1 BOMData:(id)a2 additionalInfo:(id)a3;
- (char)writeToDestination:(id)a0 forSystemContent:(char)a1 error:(id *)a2;
- (char)writeToDestination:(id)a0 forSystemContent:(char)a1 systemVolumeInstall:(char)a2 error:(id *)a3;
- (char)writeToDirectory:(id)a0 error:(id *)a1;
- (char)writeToSandboxRoot:(id)a0 destination:(id)a1 forSystemContent:(char)a2 error:(id *)a3;
- (char)writeToSandboxRoot:(id)a0 destination:(id)a1 forSystemContent:(char)a2 systemVolumeInstall:(char)a3 error:(id *)a4;

@end
