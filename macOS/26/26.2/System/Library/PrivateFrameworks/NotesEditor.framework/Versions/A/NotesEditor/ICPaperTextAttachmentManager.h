@interface ICPaperTextAttachmentManager : NSObject {
    void /* unknown type, empty encoding */ note;
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isMathPaperSolvingAllowedObservation;
}

- (void).cxx_destruct;
- (id)init;
- (void)noteDidChangeCalculatePreviewBehavior:(id)a0;
- (id)initWithNote:(id)a0 textView:(id)a1 delegate:(id)a2;
- (void)paperKitViewDidAppear:(id)a0;
- (void)paperKitViewWillDisappear:(id)a0;

@end
