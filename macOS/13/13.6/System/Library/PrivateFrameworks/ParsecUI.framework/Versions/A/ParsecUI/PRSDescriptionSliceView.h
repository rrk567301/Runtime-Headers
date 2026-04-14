@class NSTextField, NSString, NSArray, NSAttributedString, PRSImageView, NSView, PRSLinkButton, PRSTextView, NSImage, NSLayoutConstraint, NSImageView;

@interface PRSDescriptionSliceView : NSView {
    long long _textAlignment;
    unsigned long long _imageAlignment;
    NSImage *_image;
}

@property BOOL titleTextHidden;
@property BOOL imageHidden;
@property BOOL embeddedImageHidden;
@property BOOL descriptionTextHidden;
@property BOOL attributionHidden;
@property (retain) NSArray *activeConstraints;
@property (retain) NSArray *imageConstraints;
@property (retain) NSArray *attributionConstraints;
@property long long textAlignment;
@property (retain) NSString *titleText;
@property (retain) NSString *descriptionText;
@property (retain) NSAttributedString *descriptionAttributedString;
@property unsigned long long imageAlignment;
@property struct CGSize { double x0; double x1; } imageMargin;
@property (retain) NSImage *image;
@property (retain) NSString *attributionText;
@property (retain) NSImage *attributionImage;
@property NSTextField *titleTextField;
@property PRSImageView *imageView;
@property PRSImageView *embeddedImageView;
@property NSLayoutConstraint *embeddedImageViewHeightConstraint;
@property NSView *attributionView;
@property NSTextField *attributionField;
@property NSImageView *attributionImageView;
@property PRSLinkButton *attributionButton;
@property PRSTextView *descriptionTextView;
@property NSLayoutConstraint *descriptionTextViewMinHeightConstraint;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)isAccessibilityElement;
- (void)updateConstraints;
- (void)_setupImageView;
- (id)currentConstraints;
- (id)_constraintBetweenTitleAndImage;
- (id)_bottomConstraintWithView:(id)a0 constant:(unsigned long long)a1;
- (id)_centerAttributionConstraint;
- (id)_constraintBetweenDescriptionAndAttribution;
- (id)_constraintBetweenDescriptionAndImage;
- (id)_constraintBetweenImageAndAttribution;
- (id)_constraintBetweenImageAndDescription;
- (id)_constraintBetweenTitleAndDescription;
- (id)_constraintBetweenTopView:(id)a0 bottomView:(id)a1;
- (id)_leadingAttributionConstraint;
- (id)_leadingImageConstraint;
- (id)_leftAttributionConstraint;
- (id)_rightAttributionConstraint;
- (id)_topConstraintWithView:(id)a0 constant:(unsigned long long)a1;
- (id)_trailingAttributionConstraint;
- (id)_trailingImageConstraint;
- (id)activeViews;
- (void)clearActiveConstraints;
- (void)clearAttributionConstraints;
- (void)clearImageConstraints;
- (id)currentAttributionConstraints;
- (id)currentImageConstraints;
- (BOOL)shouldUseEmbeddedImage;
- (BOOL)shouldUseImage;

@end
