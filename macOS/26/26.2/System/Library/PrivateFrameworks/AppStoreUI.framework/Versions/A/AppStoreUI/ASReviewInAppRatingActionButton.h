@class NSTextField;

@interface ASReviewInAppRatingActionButton : NSButton {
    NSTextField *_textField;
}

@property (nonatomic) int variant;

- (id)attributedTitle;
- (void)setAttributedTitle:(id)a0;
- (void)updateLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)_backgroundColor;
- (BOOL)isFlipped;
- (void)_configureConstraints;
- (BOOL)isBordered;
- (BOOL)wantsUpdateLayer;
- (id)initWithVariant:(int)a0;

@end
