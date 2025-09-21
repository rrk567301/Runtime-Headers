@class NSString;

@interface HKCloudSyncShareParticipantDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identity;
@property (readonly, copy, nonatomic) NSString *role;
@property (readonly, copy, nonatomic) NSString *acceptanceStatus;
@property (readonly, copy, nonatomic) NSString *permission;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentity:(id)a0 role:(id)a1 acceptanceStatus:(id)a2 permission:(id)a3;

@end
