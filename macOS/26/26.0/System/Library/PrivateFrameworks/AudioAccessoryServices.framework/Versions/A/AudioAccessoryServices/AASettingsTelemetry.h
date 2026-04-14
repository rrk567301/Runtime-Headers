@class NSObject;
@protocol OS_dispatch_queue;

@interface AASettingsTelemetry : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_sendSettingsChanges:(id)a0 device:(id)a1;
- (void)_submitFeaturesChangeMetrics:(unsigned int)a0 forFeature:(id)a1 forDevice:(id)a2;
- (void)sendSettingsChanges:(id)a0 device:(id)a1;

@end
