@class NSString;

@interface NSTouchBarCustomizationPreviewSectionShade : NSView <NSAccessibilityButton, NSCollectionViewElement>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id target;
@property SEL action;
@property long long tag;
@property (copy) NSString *accessibilityLabel;

- (id)accessibilityIdentifier;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)prepareForReuse;
- (void)dealloc;
- (BOOL)accessibilityPerformPress;
- (void)handleClick:(id)a0;

@end
