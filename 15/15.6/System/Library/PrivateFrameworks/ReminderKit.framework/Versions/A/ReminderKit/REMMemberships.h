@class NSDictionary;

@interface REMMemberships : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *membershipByMemberIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)excludingObsoleteAndModifiedEarlierThan:(id)a0;
- (id)groupIdentifierOfMemberWithIdentifier:(id)a0;
- (id)initWithMembershipByMemberIdentifier:(id)a0;
- (id)initWithMemberships:(id)a0;
- (id)mergingWith:(id)a0 mergePolicy:(unsigned long long)a1;

@end
