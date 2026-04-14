@class NSString;

@interface SCNAnimationReference : CAAnimationGroup

@property (copy, nonatomic) NSString *referenceName;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)_isAReference;

@end
