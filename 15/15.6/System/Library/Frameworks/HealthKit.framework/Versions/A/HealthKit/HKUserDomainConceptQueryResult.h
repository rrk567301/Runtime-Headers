@class HKUserDomainConcept, HKQueryAnchor;

@interface HKUserDomainConceptQueryResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long rawAnchor;
@property (readonly, copy, nonatomic) HKUserDomainConcept *userConcept;
@property (readonly, copy, nonatomic) HKQueryAnchor *anchor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUserConcept:(id)a0 rawAnchor:(long long)a1;

@end
