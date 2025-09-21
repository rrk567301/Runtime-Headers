@class NSString, _DKThrottledActivity, NSObject;
@protocol OS_dispatch_queue;

@interface _DKCloudUtilities : NSObject {
    NSObject<OS_dispatch_queue> *_fetchQueue;
    _DKThrottledActivity *_activityThrottler;
    char _supportsDeviceToDeviceEncryption;
    char _isSingleDevice;
}

@property (class, getter=isCloudKitEnabled) char cloudKitEnabled;
@property (class, getter=isUnitTesting) char unitTesting;
@property (class, readonly, nonatomic) NSString *containerIdentifier;
@property (class, readonly, nonatomic) char isSyncAvailableAndEnabled;

@property (readonly, nonatomic) char isSingleDevice;
@property (readonly, nonatomic) char isCloudSyncAvailable;
@property (readonly, nonatomic) char isSiriCloudSyncEnabled;
@property (readonly, nonatomic) char supportsDeviceToDeviceEncryption;

+ (id)sharedInstance;
+ (char)isSyncAvailableAndEnabledWithVerboseLogging:(char)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_accountDidChange:(id)a0;
- (void)deleteRemoteStateWithReply:(id /* block */)a0;
- (void)setCloudSyncAvailable:(char)a0;

@end
