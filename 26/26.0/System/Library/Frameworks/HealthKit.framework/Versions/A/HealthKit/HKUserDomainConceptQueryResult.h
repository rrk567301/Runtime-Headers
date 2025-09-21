@class HKUserDomainConcept, HKQueryAnchor;

@interface HKUserDomainConceptQueryResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long rawAnchor;
@property (readonly, copy, nonatomic) HKUserDomainConcept *userConcept;
@property (readonly, copy, nonatomic) HKQueryAnchor *anchor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUserConcept:(id)a0 rawAnchor:(long long)a1;

@end
