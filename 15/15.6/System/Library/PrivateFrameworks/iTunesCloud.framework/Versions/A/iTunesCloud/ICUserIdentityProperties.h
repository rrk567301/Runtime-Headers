@class NSString, NSArray, NSDictionary, NSDate, NSNumber, ICDelegateToken;

@interface ICUserIdentityProperties : NSObject <NSMutableCopying, NSCopying, NSSecureCoding> {
    NSString *_alternateDSID;
    NSString *_carrierBundleDeviceIdentifier;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_storefrontIdentifier;
    NSString *_username;
    NSNumber *_mergeToCloudLibraryPreference;
    NSDictionary *_cloudLibraryStateReason;
    NSDictionary *_privacyAcknowledgementVersions;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isCloudBackupEnabled) char cloudBackupEnabled;
@property (copy, nonatomic, setter=setICloudPersonID:) NSString *iCloudPersonID;
@property (copy, nonatomic) NSArray *homeUserIdentifiers;
@property (copy, nonatomic) NSDictionary *privateListeningEnabledForHomeUsers;
@property (readonly, copy, nonatomic) NSString *alternateDSID;
@property (readonly, copy, nonatomic) NSString *carrierBundleDeviceIdentifier;
@property (readonly, copy, nonatomic) NSNumber *DSID;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (readonly, nonatomic, getter=isManagedAppleID) char managedAppleID;
@property (readonly, nonatomic, getter=isSandboxed) char sandboxed;
@property (readonly, copy, nonatomic) NSString *storefrontIdentifier;
@property (readonly, nonatomic, getter=isSubscriptionStatusEnabled) char subscriptionStatusEnabled;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSDate *ageVerificationExpirationDate;
@property (readonly, copy, nonatomic) NSNumber *mergeToCloudLibraryPreference;
@property (readonly, copy, nonatomic) NSDictionary *cloudLibraryStateReason;
@property (readonly, copy, nonatomic) NSNumber *privateListeningEnabled;
@property (readonly, nonatomic, getter=isActiveLocker) char activeLocker;
@property (readonly, nonatomic, getter=isActive) char active;
@property (readonly, copy, nonatomic) NSDictionary *privacyAcknowledgementVersions;
@property (readonly, nonatomic, getter=isU18MinorAccount) char u18MinorAccount;
@property (readonly, nonatomic, getter=isDelegated) char delegated;
@property (readonly, copy, nonatomic) ICDelegateToken *delegateToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToIdentityProperties:(id)a0;

@end
