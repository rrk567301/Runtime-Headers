@class NSTextField;

@interface ASReviewInAppRatingActionButton : NSButton {
    NSTextField *_textField;
}

@property (nonatomic) int variant;

- (void)setAttributedTitle:(id)a0;
- (id)attributedTitle;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateLayer;
- (BOOL)isFlipped;
- (id)_backgroundColor;
- (void).cxx_destruct;
- (void)_configureConstraints;
- (BOOL)isBordered;
- (BOOL)wantsUpdateLayer;
- (id)initWithVariant:(int)a0;

@end
