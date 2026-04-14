@class VFXModel, NSArray, NSString, VFXNode, VFXBtShapeWrapper;

@interface VFXPhysicsShape : NSObject <VFXReferenceEnumerable, VFXCopyingRemappable, NSCopying, NSSecureCoding> {
    id _referenceObject;
    NSArray *_transforms;
    void /* unknown type, empty encoding */ _scale;
    void /* unknown type, empty encoding */ _nodeScale;
    float _margin;
    long long _type;
    BOOL _flattened;
    struct __CFArray { } *_physicsBodies;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _physicsBodiesLock;
    VFXBtShapeWrapper *_shape;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VFXModel *model;
@property (retain, nonatomic) VFXNode *shapeNode;
@property (retain, nonatomic) NSArray *shapes;
@property (readonly, nonatomic) NSArray *transforms;
@property (nonatomic) void /* unknown type, empty encoding */ scale;
@property (nonatomic) float margin;
@property (nonatomic) long long type;
@property (nonatomic) BOOL flattened;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shapeWithShapes:(id)a0 transforms:(id)a1;
+ (id)shapeWithModel:(id)a0;
+ (id)defaultShapeForModel:(id)a0;
+ (id)shapeWithNode:(id)a0 flattened:(BOOL)a1;

- (void)commonInit;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)valueForKey:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)didChange;
- (id)initWithContent:(id)a0;
- (id)scaleValue;
- (void)_updateScale;
- (void)_setTransforms:(id)a0;
- (void)_customDecodingOfVFXPhysicsShape:(id)a0;
- (void)_customEncodingOfVFXPhysicsShape:(id)a0;
- (void)_setNodeScale:(SEL)a0;
- (void)_setShapeObject:(id)a0;
- (id)_shapeHandle:(struct __CFXNode { } *)a0;
- (void)copyTo:(id)a0 withContext:(id)a1;
- (void)didAddToPhysicsBody:(id)a0;
- (void)didRemoveFromPhysicsBody:(id)a0;
- (void)enumerateReferencesForOperation:(long long)a0 usingBlock:(id /* block */)a1;
- (void)setScaleValue:(id)a0;

@end
