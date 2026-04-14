@interface PXComposablePhotosAction : PXPhotosAction {
    void /* unknown type, empty encoding */ subActions;
    void /* unknown type, empty encoding */ subActionCount;
    void /* unknown type, empty encoding */ actionsCompleted;
    void /* unknown type, empty encoding */ completionHandler;
    void /* unknown type, empty encoding */ success;
    void /* unknown type, empty encoding */ error;
}

- (void)performAction:(id /* block */)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)performUndo:(id /* block */)a0;
- (id)initWithSubActions:(id)a0;

@end
