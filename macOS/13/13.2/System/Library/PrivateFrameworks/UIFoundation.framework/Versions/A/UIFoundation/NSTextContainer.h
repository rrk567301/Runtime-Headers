@class NSArray, NSDictionary, NSTextView, NSLayoutManager, NSTextLayoutManager;

@interface NSTextContainer : NSObject <NSSecureCoding, NSTextLayoutOrientationProvider> {
    unsigned long long _maximumLines;
    NSTextLayoutManager *_textLayoutManager;
    NSArray *_exclusionPaths;
    struct CGPath { } *_cachedBoundingPath;
    struct __CFArray { } *_cachedClippingAttributes;
    struct __CFArray { } *_cachedBounds;
    double _cacheBoundsMinY;
    double _cacheBoundsMaxY;
    double _minimumWidth;
    long long _layoutOrientation;
    NSDictionary *_attributesForExtraLineFragment;
    long long _applicationFrameworkContext;
    BOOL _textViewSupportsAdaptiveColor;
    BOOL _textViewSupportsDowngrade;
    BOOL _textViewHasDefaultParagraphStyle;
    BOOL _textViewHasLinkTextAttributes;
    NSLayoutManager *_layoutManager;
    NSTextView *_textView;
    struct CGSize { double width; double height; } _size;
    double _lineFragmentPadding;
    struct __tcFlags { unsigned char widthTracksTextView : 1; unsigned char heightTracksTextView : 1; unsigned char observingFrameChanges : 1; unsigned char lineBreakMode : 4; unsigned char oldAPI : 1; unsigned char _reserved : 8; } _tcFlags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property NSLayoutManager *layoutManager;
@property (readonly, weak) NSTextLayoutManager *textLayoutManager;
@property struct CGSize { double x0; double x1; } size;
@property (copy) NSArray *exclusionPaths;
@property unsigned long long lineBreakMode;
@property double lineFragmentPadding;
@property unsigned long long maximumNumberOfLines;
@property (readonly, getter=isSimpleRectangularTextContainer) BOOL simpleRectangularTextContainer;
@property BOOL widthTracksTextView;
@property BOOL heightTracksTextView;
@property (weak) NSTextView *textView;
@property (readonly) long long layoutOrientation;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)defaultParagraphStyle;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })containerSize;
- (void)setContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)_resizeAccordingToTextView:(id)a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_commonInit;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (long long)layoutOrientation;
- (id)selectedTextAttributes;
- (id)linkTextAttributes;
- (struct CGPoint { double x0; double x1; })textContainerOrigin;
- (void)invalidateTextContainerOrigin;
- (id)renderingColorForDocumentColor:(id)a0;
- (void)setLayoutOrientation:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atIndex:(unsigned long long)a1 writingDirection:(long long)a2 remainingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (void)coordinateAccess:(id /* block */)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })textContainerInsetsForView_iOS:(id)a0;
- (void)setTextLayoutManager:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sweepDirection:(unsigned long long)a1 movementDirection:(unsigned long long)a2 remainingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (void)replaceLayoutManager:(id)a0;
- (void)_containerTextViewFrameChanged:(id)a0;
- (BOOL)_hasLayoutManager:(id)a0;
- (BOOL)_textViewAllowsMigratingToLayoutManager;
- (id)attributesForExtraLineFragment;
- (void)setAttributesForExtraLineFragment:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 remainingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)markedTextAttributesAtCharacterIndex:(long long)a0 effectiveRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)setMinimumLineFragmentWidth:(double)a0;
- (double)minimumLineFragmentWidth;
- (void)_setContainerObservesTextViewFrameChanges:(BOOL)a0;
- (BOOL)_containerObservesTextViewFrameChanges;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })textContainerInsetsForView:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })textContainerInsetsForView_macOS:(id)a0;

@end
