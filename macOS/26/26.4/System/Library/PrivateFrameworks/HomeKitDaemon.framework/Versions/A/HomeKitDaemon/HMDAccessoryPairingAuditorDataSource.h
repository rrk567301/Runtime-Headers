@class NSNotificationCenter, NSString;
@protocol HAPKeyStore;

@interface HMDAccessoryPairingAuditorDataSource : NSObject <HMDAccessoryPairingAuditorDataSource>

@property (readonly, nonatomic) BOOL isiOSDevice;
@property (readonly, nonatomic) BOOL isDesignatedFMFDevice;
@property (readonly, nonatomic) id<HAPKeyStore> keyStore;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) BOOL isHH2KeyRollingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
