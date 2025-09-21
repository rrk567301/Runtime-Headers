@class NSString, WBSPublicKeyCredentialIdentifier, NSUUID;

@interface WBSAutoFillPasskey : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *customTitle;
@property (readonly, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) WBSPublicKeyCredentialIdentifier *identifier;
@property (readonly, copy, nonatomic) NSUUID *operationUUID;
@property (readonly, nonatomic) char shouldRequireUserVerification;
@property (readonly, nonatomic) char requestUsedNonEmptyAllowList;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUsername:(id)a0 customTitle:(id)a1 relyingPartyIdentifier:(id)a2 identifier:(id)a3 operationUUID:(id)a4 shouldRequireUserVerification:(char)a5 requestUsedNonEmptyAllowList:(char)a6;

@end
