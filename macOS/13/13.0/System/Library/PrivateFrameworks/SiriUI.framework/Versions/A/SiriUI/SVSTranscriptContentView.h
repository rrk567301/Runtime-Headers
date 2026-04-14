@class SiriUITranscriptClumpView, NSView, SiriUIKeyline;

@interface SVSTranscriptContentView : NSView {
    SiriUIKeyline *_bottomKeyline;
    SiriUIKeyline *_topKeyline;
}

@property (readonly, nonatomic) SiriUITranscriptClumpView *transcriptClumpView;
@property (retain, nonatomic) NSView *suggestionsView;
@property (nonatomic) double topMargin;
@property (readonly, nonatomic) double bottomMargin;
@property (nonatomic) BOOL bottomKeylineHidden;
@property (nonatomic) BOOL topKeylineHidden;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 transcriptClumpView:(id)a1;

@end
