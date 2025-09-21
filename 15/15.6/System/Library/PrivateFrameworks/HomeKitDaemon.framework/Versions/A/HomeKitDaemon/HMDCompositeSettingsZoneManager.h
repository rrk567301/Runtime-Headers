@class HMBLocalZone, NSString, NAFuture, NSObject, HMBCloudZone;
@protocol OS_dispatch_queue, HMDDatabase;

@interface HMDCompositeSettingsZoneManager : NSObject <HMFLogging, HMDDatabaseDelegate>

@property (readonly) id<HMDDatabase> database;
@property (readonly) char createZoneIfNotExist;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) HMBLocalZone *localZone;
@property (retain) HMBCloudZone *cloudZone;
@property (readonly, copy) NSString *zoneName;
@property (readonly, getter=isConfigured) char configured;
@property (readonly) NAFuture *configurationFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)remove;
- (id)logIdentifier;
- (void)database:(id)a0 didCreateZoneWithName:(id)a1 isPrivate:(char)a2;
- (void)database:(id)a0 didReceiveMessageWithUserInfo:(id)a1;
- (void)database:(id)a0 didRemoveZoneWithName:(id)a1 isPrivate:(char)a2;
- (id)database:(id)a0 willRemoveZoneWithName:(id)a1 isPrivate:(char)a2;
- (id)initWithDatabase:(id)a0 workQueue:(id)a1 zoneName:(id)a2 createZoneIfNotExists:(char)a3;

@end
