@class NSString, VFXWorld, VFXBehaviorGraph;
@protocol VFXParameterList;

@interface VFXCoreAsset : NSObject <VFXWorldReference, VFXReferenceEnumerable, VFXAsset, VFXBehaviorSupport, VFXParameterizable, VFXPresentationSupport, NSSecureCoding, NSCopying> {
    VFXWorld *_world;
    unsigned int _worldReferenceCounter;
    unsigned char _isPresentationObject : 1;
    unsigned char _isTextureSource : 1;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BOOL isHeader;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) VFXBehaviorGraph *behaviorGraph;
@property (readonly, nonatomic) struct __CFXWorld { } *worldRef;
@property (readonly, nonatomic) VFXWorld *world;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<VFXParameterList> parameters;
@property (readonly) id presentationObject;

+ (id)assetWithEntityObject:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)entityTag;
- (id)initWithCoder:(id)a0;
- (void *)__CFObject;
- (void)setWorld:(id)a0;
- (id)entityObject;
- (BOOL)isTextureSource;
- (void)addWorldReference:(id)a0;
- (void)copyTo:(id)a0 withContext:(id)a1;
- (id)coreEntityHandle;
- (void)didAttachToWorld:(id)a0;
- (void)didDetachFromWorld:(id)a0;
- (void)enumerateReferencesForOperation:(long long)a0 usingBlock:(id /* block */)a1;
- (id)initPresentation:(id)a0;
- (id)initWithEntityObject:(id)a0;
- (void)removeWorldReference:(id)a0;
- (void)resolveTag:(id)a0 remap:(id)a1;
- (void)setIsTextureSource:(BOOL)a0;

@end
