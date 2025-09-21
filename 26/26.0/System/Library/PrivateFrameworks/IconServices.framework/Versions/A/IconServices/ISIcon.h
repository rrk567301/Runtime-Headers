@class IFSymbol, NSString, NSMutableDictionary, NSArray, ISIconManager;
@protocol ISIconIdentity;

@interface ISIcon : NSObject <ISScalableCompositorResource> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) id<ISIconIdentity> _identity;
@property BOOL usesExternalCompositor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) ISIconManager *manager;
@property (retain) NSMutableDictionary *prepareISIconDigestToSignpostIDs;
@property (readonly, nonatomic) NSArray *decorations;
@property (readonly, nonatomic) IFSymbol *symbol;

+ (id)applicationIcon;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)transparentIcon;
+ (id)placeholderIcon;
+ (const char *)_AttachedResourceInfoKey;
+ (unsigned long long)behaviourRevision;
+ (int)findVariantFromSet:(unsigned long long)a0 deviceIdiom:(unsigned long long)a1 size:(struct CGSize { double x0; double x1; })a2 scale:(double)a3;
+ (id)genericApplicationIcon;
+ (id)genericDocumentIcon;
+ (id)sizesFromSet:(unsigned long long)a0;
+ (id)templateTypeForTag:(id)a0 tagClass:(id)a1;
+ (id)templateTypeForType:(id)a0;
+ (BOOL)variant:(int)a0 isMemberOfSet:(unsigned long long)a1;
+ (struct _LIIconVariantInfo { int x0; struct CGSize { double x0; double x1; } x1; double x2; unsigned long long x3; char *x4; } *)variantInfoForSet:(unsigned long long)a0 count:(unsigned long long *)a1;
+ (BOOL)writeCustomIcon:(id)a0 toURL:(id)a1 error:(id *)a2;

- (id)_init;
- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void)_prepareImagesForImageDescriptors:(id)a0;
- (unsigned long long)badgeOptions;
- (id)imageForDescriptor:(id)a0;
- (id)symbol;
- (double)_aspectRatio;
- (void).cxx_destruct;
- (unsigned long long)variantOptions;
- (struct CGImage { } *)CGImageForImageDescriptor:(id)a0;
- (id)prepareImageForDescriptor:(id)a0;
- (void)prepareImagesForImageDescriptors:(id)a0;
- (id)iconWithDecorations:(id)a0;
- (struct CGImage { } *)CGImageForDescriptor:(id)a0;
- (id)_imageForSymbolImageDescriptor:(id)a0;
- (id)_activeSignpostsForDescriptor:(id)a0;
- (id)_beginPrepareISIconSignpost:(id)a0 funcName:(const char *)a1;
- (void)_endPrepareISIconSignpost:(id)a0;
- (id)_prepareImageForImageDescriptor:(id)a0;
- (void)_tweakCopiedImageDescriptorsIfNecessary:(id)a0;
- (void)getCGImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)prepareImagesForDescriptors:(id)a0;

@end
