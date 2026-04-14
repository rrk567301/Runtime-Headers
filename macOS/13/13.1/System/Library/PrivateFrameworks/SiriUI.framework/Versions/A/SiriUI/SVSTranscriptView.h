@class SiriUITranscriptClumpView, NSView, SVSTranscriptContentView;

@interface SVSTranscriptView : NSView {
    SVSTranscriptContentView *_contentView;
}

@property (readonly, nonatomic) SiriUITranscriptClumpView *transcriptClumpView;
@property (retain, nonatomic) NSView *suggestionsView;
@property (nonatomic) double topMargin;
@property (readonly, nonatomic) double bottomMargin;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 transcriptClumpView:(id)a1;
- (void)setBottomKeylineHidden:(BOOL)a0;
- (void)setTopKeylineHidden:(BOOL)a0;

@end
