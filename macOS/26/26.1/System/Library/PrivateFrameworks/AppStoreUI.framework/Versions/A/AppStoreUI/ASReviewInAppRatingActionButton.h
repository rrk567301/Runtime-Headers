@class NSTextField;

@interface ASReviewInAppRatingActionButton : NSButton {
    NSTextField *_textField;
}

@property (nonatomic) int variant;

- (id)attributedTitle;
- (void)setAttributedTitle:(id)a0;
- (id)_backgroundColor;
- (void).cxx_destruct;
- (void)updateLayer;
- (BOOL)isFlipped;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_configureConstraints;
- (BOOL)isBordered;
- (BOOL)wantsUpdateLayer;
- (id)initWithVariant:(int)a0;

@end
