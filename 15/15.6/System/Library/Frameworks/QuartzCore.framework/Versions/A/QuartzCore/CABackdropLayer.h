@class NSString;
@protocol CABackdropLayerDelegate, CALayerDelegate;

@interface CABackdropLayer : CALayer

@property (getter=isEnabled) char enabled;
@property (copy) NSString *groupName;
@property char usesGlobalGroupNamespace;
@property (copy) NSString *groupNamespace;
@property double scale;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } backdropRect;
@property double marginWidth;
@property char disablesOccludedBackdropBlurs;
@property char captureOnly;
@property char allowsInPlaceFiltering;
@property char reducesCaptureBitDepth;
@property char ignoresScreenClip;
@property char preallocatesScreenArea;
@property double bleedAmount;
@property char windowServerAware;
@property (getter=isInverseMeshed) char inverseMeshed;
@property char allowsSubstituteColor;
@property struct CGColor { } *substituteColor;
@property char ignoresOffscreenGroups;
@property double zoom;
@property (weak) id<CABackdropLayerDelegate, CALayerDelegate> delegate;

+ (void)initialize;
+ (id)defaultValueForKey:(id)a0;
+ (id)CA_attributes;
+ (char)CA_automaticallyNotifiesObservers:(Class)a0;
+ (char)_hasRenderLayerSubclass;

- (void)didChangeValueForKey:(id)a0;
- (void)layerDidBecomeVisible:(char)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (void)_renderBackgroundInContext:(struct CGContext { } *)a0;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)a0;

@end
