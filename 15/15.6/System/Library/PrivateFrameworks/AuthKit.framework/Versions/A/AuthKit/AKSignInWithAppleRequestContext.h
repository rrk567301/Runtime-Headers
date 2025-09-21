@class NSSet, NSString, AKSignInWithAppleAccount;

@interface AKSignInWithAppleRequestContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char _simulateAccountSharingResponse;
@property (nonatomic) char _isMoveAccountRequest;
@property (retain, nonatomic) NSSet *_groups;
@property (readonly, copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) AKSignInWithAppleAccount *signInWithAppleAccount;
@property (copy, nonatomic) NSString *currentGroupID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAltDSID:(id)a0;

@end
