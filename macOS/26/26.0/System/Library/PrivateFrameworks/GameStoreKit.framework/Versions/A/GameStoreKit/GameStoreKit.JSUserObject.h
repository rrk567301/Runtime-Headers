@class NSString, NSNumber;

@interface GameStoreKit.JSUserObject : NSObject <_TtP12GameStoreKitP33_0B37B103AC5DE937E93EE0BA2C7CB33019JSUserObjectExports_> {
    void /* unknown type, empty encoding */ accounts;
    void /* unknown type, empty encoding */ onDevicePersonalizationDataManager;
}

@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) BOOL isManagedAppleID;
@property (nonatomic, readonly) BOOL isUnderThirteen;
@property (nonatomic, readonly) NSNumber *userAgeIfAvailable;
@property (nonatomic, readonly) BOOL isFitnessAppInstallationAllowed;
@property (nonatomic, readonly) BOOL isOnDevicePersonalizationEnabled;

- (id)init;
- (void).cxx_destruct;
- (id)onDevicePersonalizationDataContainerForAppIds:(id)a0;

@end
