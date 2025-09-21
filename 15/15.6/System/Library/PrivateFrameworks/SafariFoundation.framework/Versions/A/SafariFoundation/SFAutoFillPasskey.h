@class NSString, SFAutoFillPasskeyIdentifier, NSData, WBSAutoFillPasskey;

@interface SFAutoFillPasskey : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) WBSAutoFillPasskey *corePasskey;
@property (readonly, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *customTitle;
@property (readonly, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) SFAutoFillPasskeyIdentifier *identifier;
@property (readonly, nonatomic) NSData *userHandle;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCoreAutoFillPasskey:(id)a0;

@end
