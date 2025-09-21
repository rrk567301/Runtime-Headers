@class NSImageView, NSString, SiriUIKeyline, SiriUIContentLabel, SiriUISnippetViewController;

@interface SiriUIReusableHeaderView : SiriUIContentButton <NSCollectionViewElement, SiriUIReusableView, SiriUISizableHeaderView> {
    NSImageView *_chevronView;
}

@property (readonly, nonatomic) SiriUIContentLabel *headerLabel;
@property (readonly, nonatomic) SiriUIKeyline *keyline;
@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) long long keylineType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;
@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController;

+ (id)elementKind;
+ (double)defaultHeight;
+ (id)reuseIdentifier;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)updateConstraints;
- (void).cxx_destruct;
- (BOOL)wantsLayer;
- (double)desiredHeightForWidth:(double)a0;
- (void)setAttributedTitleText:(id)a0;

@end
