@class SFCredentialProviderExtensionState, NSString, NSDate;

@interface SFCredentialIdentity : NSObject <SFSafariPasswordCredential, NSCopying, NSSecureCoding> {
    NSString *_domainWithoutWWWDot;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFCredentialProviderExtensionState *owningExtensionState;
@property (nonatomic) long long rowIdentifier;
@property (readonly, nonatomic) long long serviceIdentifierType;
@property (readonly, copy, nonatomic) NSString *serviceIdentifier;
@property (readonly, copy, nonatomic) NSString *externalRecordIdentifier;
@property (readonly, copy, nonatomic) NSString *user;
@property (readonly, nonatomic) long long rank;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long wbsServiceIdentifierType;
@property (readonly, copy, nonatomic) NSString *serviceDisplayName;
@property (readonly, copy, nonatomic) NSString *site;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly, nonatomic) NSString *externalProviderBundleID;
@property (readonly, nonatomic) NSString *externalProviderExtensionBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_domainWithoutWWWDot;
- (long long)compareForQuickTypeBar:(id)a0;
- (id)initWithRowIdentifier:(long long)a0 serviceIdentifier:(id)a1 serviceIdentifierType:(long long)a2 serviceDisplayName:(id)a3 externalRecordIdentifier:(id)a4 user:(id)a5 rank:(long long)a6;
- (id)initWithRowIdentifier:(long long)a0 serviceIdentifier:(id)a1 serviceIdentifierType:(long long)a2 serviceDisplayName:(id)a3 externalRecordIdentifier:(id)a4 user:(id)a5 rank:(long long)a6 owningExtensionState:(id)a7;
- (id)initWithServiceIdentifier:(id)a0 serviceIdentifierType:(long long)a1 serviceDisplayName:(id)a2 externalRecordIdentifier:(id)a3 user:(id)a4 rank:(long long)a5;

@end
