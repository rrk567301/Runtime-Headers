@class NSString, NSNumber;

@interface AppStoreComponentsDaemonKit.JSUserObject : NSObject <_TtP27AppStoreComponentsDaemonKitP33_1DA3E5366B797EE0F2165DD544E65EE419JSUserObjectExports_> {
    void /* unknown type, empty encoding */ accounts;
}

@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) BOOL isManagedAppleID;
@property (nonatomic, readonly) BOOL isUnderThirteen;
@property (nonatomic, readonly) NSNumber *userAgeIfAvailable;
@property (nonatomic, readonly) BOOL isFitnessAppInstallationAllowed;

- (id)init;
- (void).cxx_destruct;
- (id)cookieForUrlWithName:(id)a0 :(id)a1;
- (id)accountCachedServerDataBoolForKey:(id)a0;
- (id)accountCachedServerDataIntForKey:(id)a0;
- (id)accountCachedServerDataStringForKey:(id)a0;
- (id)cookiesForUrl:(id)a0;

@end
