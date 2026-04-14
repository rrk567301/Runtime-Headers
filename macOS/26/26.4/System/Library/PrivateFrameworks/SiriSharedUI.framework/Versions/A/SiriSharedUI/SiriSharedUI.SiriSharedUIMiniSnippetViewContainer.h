@class NSView;

@interface SiriSharedUI.SiriSharedUIMiniSnippetViewContainer : NSObject {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ hostingController;
}

@property (nonatomic, readonly) NSView *view;

- (id)initWithDelegate:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateViewModel;
- (id)initWithText:(id)a0 delegate:(id)a1;
- (void)updateStreamingStatus:(BOOL)a0;
- (void)updateWithModel:(id)a0 inMiniSnippetState:(BOOL)a1;

@end
