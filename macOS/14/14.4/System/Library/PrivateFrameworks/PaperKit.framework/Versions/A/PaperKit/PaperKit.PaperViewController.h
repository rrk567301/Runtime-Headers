@interface PaperKit.PaperViewController : NSViewController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ remotePaperViewController;
    void /* unknown type, empty encoding */ extensionRequestQueue;
    void /* unknown type, empty encoding */ extensionCreatedSemaphore;
    void /* unknown type, empty encoding */ extensionSetupSemaphore;
    void /* unknown type, empty encoding */ paperKitExtension;
    void /* unknown type, empty encoding */ requestIdentifier;
    void /* unknown type, empty encoding */ lastReportedSafeAreaInsets;
    void /* unknown type, empty encoding */ liveStreamMessenger;
    void /* unknown type, empty encoding */ canvasContentMode;
    void /* unknown type, empty encoding */ paperDocumentInlineThumbnailsVisible;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;

@end
