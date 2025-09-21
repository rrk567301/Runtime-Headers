@class VFXNode;
@protocol VFXAvoidOccluderConstraintDelegate;

@interface VFXAvoidOccluderConstraint : VFXConstraint {
    VFXNode *_target;
    unsigned long long _categoryBitMask;
    float _offset;
    id _delegate;
}

@property (nonatomic) id<VFXAvoidOccluderConstraintDelegate> delegate;
@property (retain, nonatomic) VFXNode *target;
@property (nonatomic) unsigned long long occluderCategoryBitMask;
@property (nonatomic) float bias;

+ (BOOL)supportsSecureCoding;
+ (id)avoidOccluderConstraint;
+ (id)avoidOccluderConstraintWithTarget:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_customDecodingOfVFXAvoidOccluderConstraint:(id)a0;
- (void)_customEncodingOfVFXAvoidOccluderConstraint:(id)a0;
- (void)enumerateReferencesForOperation:(long long)a0 usingBlock:(id /* block */)a1;

@end
