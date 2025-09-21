@interface ICVisualAssetImportController : NSObject {
    void /* unknown type, empty encoding */ note;
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ doNotAdvanceInsertionPointAfterInsertingAttachment;
}

@property (nonatomic) BOOL isShowing;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addImageData:(id)a0 typeIdentifier:(id)a1;
- (void)addImageData:(id)a0 typeIdentifier:(id)a1 forceAddToPaper:(BOOL)a2;
- (id)initWithNote:(id)a0 textView:(id)a1;
- (void)presentVisualAssetPickerController;

@end
