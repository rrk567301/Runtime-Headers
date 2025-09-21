@interface PKPatchAndUpdateInstallOperation : PKPatchFilesInstallOperation {
    unsigned long long _totalPatchAndUpdateSize;
    unsigned long long _patchAndUpdateSizeCompleted;
}

- (void)main;
- (void)dealloc;
- (double)estimatedTimeRemaining;
- (BOOL)_patchAndUpdateForPackageSpecifier:(id)a0 error:(id *)a1;
- (BOOL)_shouldUseUpdateVariantForPackageSpecifier:(id)a0;
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2;

@end
