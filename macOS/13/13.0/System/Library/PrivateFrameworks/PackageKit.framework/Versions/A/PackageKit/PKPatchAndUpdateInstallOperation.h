@class NSMutableDictionary;

@interface PKPatchAndUpdateInstallOperation : PKPatchFilesInstallOperation {
    unsigned long long _totalPatchAndUpdateSize;
    unsigned long long _patchAndUpdateSizeCompleted;
    void *_bomCopier;
    void *_bomSys;
    NSMutableDictionary *_bomCopierOptions;
}

- (void)dealloc;
- (void)main;
- (double)estimatedTimeRemaining;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;
- (BOOL)_shouldUseUpdateVariantForPackageSpecifier:(id)a0;
- (BOOL)_patchAndUpdateForPackageSpecifier:(id)a0 error:(id *)a1;
- (BOOL)_copyItemAtPath:(id)a0 withAttributes:(id)a1 toPath:(id)a2 usingAFSC:(BOOL)a3 withNewAFSCFormat:(BOOL)a4 error:(id *)a5;

@end
