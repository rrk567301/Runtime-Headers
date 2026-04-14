@class NSString, NSAttributedString, NSTextField;

@interface SiriUIReusableSubtitledHeaderView : SiriUIReusableHeaderView

@property (retain, nonatomic) NSTextField *subtitleLabel;
@property (copy, nonatomic) NSString *subtitleText;
@property (copy, nonatomic) NSAttributedString *attributedSubtitleText;

+ (double)defaultHeight;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)updateConstraints;
- (void).cxx_destruct;
- (double)desiredHeightForWidth:(double)a0;

@end
