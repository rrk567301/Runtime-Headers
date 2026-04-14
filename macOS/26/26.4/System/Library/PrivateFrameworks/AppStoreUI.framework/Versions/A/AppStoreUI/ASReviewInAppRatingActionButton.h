@class NSTextField;

@interface ASReviewInAppRatingActionButton : NSButton {
    NSTextField *_textField;
}

@property (nonatomic) int variant;

- (void)updateLayer;
- (id)_backgroundColor;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isFlipped;
- (void)setAttributedTitle:(id)a0;
- (id)attributedTitle;
- (void)_configureConstraints;
- (BOOL)isBordered;
- (BOOL)wantsUpdateLayer;
- (id)initWithVariant:(int)a0;

@end
