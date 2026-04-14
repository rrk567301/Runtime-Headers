@interface RemindersUICore.TTRMComponentViewAttachmentsComponent : NSObject <QLPreviewPanelDelegate, QLPreviewPanelDataSource> {
    void /* unknown type, empty encoding */ enabledState;
    void /* unknown type, empty encoding */ currentAccessedSecurityScopedResources;
    void /* unknown type, empty encoding */ attachmentsViewController;
}

- (id)init;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)a0;
- (void).cxx_destruct;
- (id)previewPanel:(id)a0 previewItemAtIndex:(long long)a1;

@end
