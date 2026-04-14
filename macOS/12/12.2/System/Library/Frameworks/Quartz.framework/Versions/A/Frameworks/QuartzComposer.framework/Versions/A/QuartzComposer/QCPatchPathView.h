@interface QCPatchPathView : GFGraphPathView {
    void *_unused2[4];
}

+ (void)initialize;
+ (BOOL)_isGraph:(id)a0;

- (Class)valueClassForBinding:(id)a0;
- (void)setRootPatch:(id)a0;
- (id)rootPatch;
- (id)currentPatch;
- (void)setCurrentPatch:(id)a0;
- (void)setPatchEditor:(id)a0;
- (id)patchEditor;

@end
