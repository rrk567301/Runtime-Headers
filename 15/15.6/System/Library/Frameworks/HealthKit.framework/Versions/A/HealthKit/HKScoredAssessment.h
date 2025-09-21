@interface HKScoredAssessment : HKSample <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, setter=_setScore:) long long score;

+ (char)_isConcreteObjectClass;
+ (id)assessmentWithDate:(id)a0 type:(id)a1 score:(long long)a2 metadata:(id)a3 config:(id /* block */)a4;
+ (char)supportsEquivalence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEquivalent:(id)a0;

@end
