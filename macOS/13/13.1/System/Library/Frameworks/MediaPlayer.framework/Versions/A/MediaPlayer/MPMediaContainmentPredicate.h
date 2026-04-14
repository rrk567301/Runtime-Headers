@class NSString, NSSet;

@interface MPMediaContainmentPredicate : MPMediaPredicate

@property (readonly, copy, nonatomic) NSString *property;
@property (readonly, copy, nonatomic) NSSet *values;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithProperty:(id)a0 values:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
