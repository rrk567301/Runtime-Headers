@class NSString;

@interface SCNAnimationReference : CAAnimationGroup

@property (copy, nonatomic) NSString *referenceName;

- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isAReference;

@end
