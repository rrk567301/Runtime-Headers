@class NSString, NSView, NSViewController;

@interface NSTouchBarItem : NSObject <NSCoding> {
    NSString *_identifier;
    float _visibilityPriority;
    long long _visibilityCount;
    BOOL _requiresTrueCenterLayout;
}

@property (readonly) struct CGSize { double x0; double x1; } preferredSizeForCustomizationPalette;
@property (readonly) long long preferredPopoverTransposerPriority;
@property (readonly) Class preferredPopoverTransposerClass;
@property (readonly, copy) NSString *identifier;
@property float visibilityPriority;
@property (readonly) NSView *view;
@property (readonly) NSViewController *viewController;
@property (readonly, copy) NSString *customizationLabel;
@property (readonly, getter=isVisible) BOOL visible;

+ (void)initialize;
+ (id)keyPathsForValuesAffectingView;
+ (void)addSystemTrayItem:(id)a0;
+ (void)removeSystemTrayItem:(id)a0;
+ (void)addTouchIDItem:(id)a0;
+ (void)removeTouchIDItem:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)_type;
- (id)initWithIdentifier:(id)a0;
- (float)priority;
- (unsigned long long)itemPosition;
- (double)preferredZOrder;
- (id)makeViewForCustomizationPalette;
- (void)_itemViewMinSize:(struct CGSize { double x0; double x1; } *)a0 maxSize:(struct CGSize { double x0; double x1; } *)a1 preferredSize:(struct CGSize { double x0; double x1; } *)a2 stretchesContent:(BOOL)a3;
- (void)_itemViewMinSize:(struct CGSize { double x0; double x1; } *)a0 maxSize:(struct CGSize { double x0; double x1; } *)a1 preferredSize:(struct CGSize { double x0; double x1; } *)a2;
- (id)_playgroundQuickLookView;
- (id)makeViewForCustomization;
- (id)makeViewForCustomizationPreview;
- (struct CGSize { double x0; double x1; })fallbackItemSizeForCustomization;
- (struct CGSize { double x0; double x1; })_contentClippingSize;
- (BOOL)_requiresTrueCenterLayout;
- (id)makePressAndHoldTransposerWithSourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 destinationContentView:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)setPriority:(float)a0;
- (void)_setRequiresTrueCenterLayout:(BOOL)a0;
- (void)_itemViewMinSize:(struct CGSize { double x0; double x1; } *)a0 maxSize:(struct CGSize { double x0; double x1; } *)a1;
- (id)_imageToDisplayForImage:(id)a0;

@end
