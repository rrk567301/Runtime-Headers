@class NSTextField, ICDisplayLink, NSString, ICAttributedStringRippler, NSColor, NSDictionary, NSImage, NSRegularExpression, ICInlineTextAttachment;
@protocol ICInlineAttachmentViewAnimationDelegate;

@interface ICInlineAttachmentView : NSView <ICAttachmentViewInitializing>

@property (retain, nonatomic) NSTextField *textField;
@property (retain, nonatomic) ICDisplayLink *rippleAnimationDisplayLink;
@property (retain, nonatomic) ICAttributedStringRippler *rippler;
@property (readonly, nonatomic) NSColor *searchHighlightColor;
@property (weak, nonatomic) ICInlineTextAttachment *textAttachment;
@property (nonatomic) double textContainerWidth;
@property (copy, nonatomic) NSDictionary *surroundingAttributes;
@property (readonly, nonatomic) double baselineOffsetFromBottom;
@property (readonly, nonatomic) NSImage *imageForPrinting;
@property (retain, nonatomic) NSRegularExpression *highlightPatternRegex;
@property (weak, nonatomic) id<ICInlineAttachmentViewAnimationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)updateLabel;
- (void)updateHighlightsWithAttributes:(id)a0;
- (void)animateInsertionIfNecessary;
- (void)attachmentDataChanged:(id)a0;
- (void)beginRippleAnimation;
- (void)endRippleAnimation;
- (id)initWithTextAttachment:(id)a0 forManualRendering:(BOOL)a1;
- (void)updateRippleAnimation;
- (void)updateStyleWithAttributes:(id)a0;

@end
