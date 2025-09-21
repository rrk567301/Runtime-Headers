@interface QCPatchProExtension : NSObject {
    double _transform[16];
    char _patchSetsTransform;
}

- (id)init;
- (double *)getTransform;
- (char)patchSetsTransform;
- (void)setPatchSetsTransform:(char)a0;

@end
