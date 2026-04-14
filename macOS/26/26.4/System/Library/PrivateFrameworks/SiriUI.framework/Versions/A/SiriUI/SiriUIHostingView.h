@class NSView;
@protocol VRXVisualResponse;

@interface SiriUIHostingView : SiriUICardSnippetView

@property (retain, nonatomic) NSView<VRXVisualResponse> *rootView;

- (id)initWithView:(id)a0;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)suppressVibrantBackground;

@end
