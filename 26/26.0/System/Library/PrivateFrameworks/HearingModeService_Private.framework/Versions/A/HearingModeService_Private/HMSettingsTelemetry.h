@class NSObject;
@protocol OS_dispatch_queue;

@interface HMSettingsTelemetry : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_submitFeaturesChangeMetrics:(unsigned int)a0 forFeature:(id)a1 forDevice:(id)a2;
- (int)_convertToServerBucketValue:(id)a0;
- (void)_sendSettingsChanges:(id)a0 record:(id)a1;
- (void)sendSettingsChanges:(id)a0 record:(id)a1;

@end
