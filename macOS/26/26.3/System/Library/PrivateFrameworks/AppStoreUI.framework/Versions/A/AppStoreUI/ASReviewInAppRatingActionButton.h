@class NSTextField;

@interface ASReviewInAppRatingActionButton : NSButton {
    NSTextField *_textField;
}

@property (nonatomic) int variant;

- (void)setAttributedTitle:(id)a0;
- (BOOL)isFlipped;
- (id)attributedTitle;
- (void).cxx_destruct;
- (id)_backgroundColor;
- (void)updateLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_configureConstraints;
- (BOOL)isBordered;
- (BOOL)wantsUpdateLayer;
- (id)initWithVariant:(int)a0;

@end
