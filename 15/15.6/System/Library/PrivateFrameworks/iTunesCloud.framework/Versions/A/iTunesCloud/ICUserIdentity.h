@class NSString, NSNumber;

@interface ICUserIdentity : NSObject <NSCopying, NSSecureCoding, _MSVAccountInformationProviding> {
    NSString *_deviceIdentifier;
    char _isEncodingUsingSpecificIdentityStore;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char hasResolvedDSID;
@property (readonly, nonatomic) unsigned long long creationTime;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, copy, nonatomic) NSNumber *DSID;
@property (readonly, copy, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) char allowsDelegation;
@property (readonly, nonatomic) char allowsAccountEstablishment;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *accountDSID;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nullIdentity;
+ (id)activeAccount;
+ (id)autoupdatingActiveAccount;
+ (id)specificAccountWithDSID:(id)a0;
+ (id)autoupdatingActiveLockerAccount;
+ (id)activeLockerAccount;
+ (id)autoupdatingDefaultMediaIdentity;
+ (id)carrierBundleWithDeviceIdentifier:(id)a0;
+ (id)defaultMediaIdentity;
+ (id)specificAccountWithAltDSID:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToIdentity:(id)a0 inStore:(id)a1;
- (void)_performEncodingTaskUsingSpecificIdentityStore:(id)a0 encodingHandler:(id /* block */)a1;
- (void)_ensureResolvedDSIDUsingSpecificIdentityStore:(id)a0;
- (char)_isComparableUsingResolvedDSID;
- (id)_resolvedDSIDUsingSpecificIdentityStore:(id)a0;
- (void)_setResolvedDSID:(id)a0;
- (unsigned long long)hashInStore:(id)a0;
- (id)identityAllowingDelegation:(char)a0;
- (id)identityAllowingEstablishment:(char)a0;

@end
