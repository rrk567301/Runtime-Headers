@class NSString, NSAttributedString, NSTextField;

@interface SiriUIReusableSubtitledHeaderView : SiriUIReusableHeaderView

@property (retain, nonatomic) NSTextField *subtitleLabel;
@property (copy, nonatomic) NSString *subtitleText;
@property (copy, nonatomic) NSAttributedString *attributedSubtitleText;

+ (double)defaultHeight;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (double)desiredHeightForWidth:(double)a0;

@end
