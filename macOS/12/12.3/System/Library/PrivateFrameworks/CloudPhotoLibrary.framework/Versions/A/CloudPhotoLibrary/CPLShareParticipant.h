@class NSString, NSPersonNameComponents;

@interface CPLShareParticipant : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) long long role;
@property (nonatomic) long long acceptanceStatus;
@property (nonatomic) long long permission;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (nonatomic) BOOL hasiCloudAccount;

+ (void)initialize;
+ (id)descriptionForRole:(long long)a0;
+ (id)descriptionForAcceptanceStatus:(long long)a0;
+ (id)descriptionForPermission:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPhoneNumber:(id)a0;
- (id)initWithEmail:(id)a0;
- (id)initWithUserIdentifier:(id)a0 phoneNumber:(id)a1 email:(id)a2;
- (id)initWithUserIdentifier:(id)a0;

@end
