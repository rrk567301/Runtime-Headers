@class NSString;
@protocol CABackdropLayerDelegate, CALayerDelegate;

@interface CABackdropLayer : CALayer

@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *groupName;
@property BOOL usesGlobalGroupNamespace;
@property (copy) NSString *groupNamespace;
@property double scale;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } backdropRect;
@property double marginWidth;
@property BOOL disablesOccludedBackdropBlurs;
@property BOOL captureOnly;
@property BOOL allowsInPlaceFiltering;
@property BOOL reducesCaptureBitDepth;
@property BOOL ignoresScreenClip;
@property BOOL preallocatesScreenArea;
@property double bleedAmount;
@property BOOL windowServerAware;
@property (getter=isInverseMeshed) BOOL inverseMeshed;
@property BOOL allowsSubstituteColor;
@property struct CGColor { } *substituteColor;
@property BOOL ignoresOffscreenGroups;
@property double zoom;
@property BOOL disableFilterCache;
@property double updateRate;
@property BOOL tracksLuma;
@property BOOL tracksLumaWhileHidden;
@property double lumaUpdateRate;
@property BOOL allowsFilteredLuma;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } lumaSubrect;
@property (weak) id<CABackdropLayerDelegate, CALayerDelegate> delegate;

+ (BOOL)_hasRenderLayerSubclass;
+ (void)initialize;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (id)CA_attributes;
+ (id)defaultValueForKey:(id)a0;

- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)a0;
- (void)_renderBackgroundInContext:(struct CGContext { } *)a0;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)didChangeValueForKey:(id)a0;

@end
