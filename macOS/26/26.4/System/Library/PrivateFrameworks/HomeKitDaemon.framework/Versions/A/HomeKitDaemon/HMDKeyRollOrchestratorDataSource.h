@class NSNotificationCenter;
@protocol HAPKeyStore, HAPSystemKeychainStore;

@interface HMDKeyRollOrchestratorDataSource : NSObject <HMDKeyRollOrchestratorDataSource>

@property (readonly, nonatomic) BOOL isiOSDevice;
@property (readonly, nonatomic) BOOL isDesignatedFMFDevice;
@property (readonly, nonatomic) BOOL isTinkerWatch;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id<HAPKeyStore> keyStore;
@property (readonly, nonatomic) id<HAPSystemKeychainStore> systemKeychainStore;
@property (readonly, nonatomic) BOOL isHH2KeyRollingEnabled;

@end
