@class AFInstanceContext, NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriPreferences : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    AFInstanceContext *_instanceContext;
}

+ (id)sharedPreferences;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInstanceContext:(id)a0;
- (id)overrideAudioSessionActiveDelay;
- (id)serverMediaPlaybackVolumeThresholdForAudioSessionActivationDelay;
- (id)serverAudioSessionActivationDelayAboveMediaPlaybackVolumeThreshold;
- (id)serverAudioSessionActivationDelay;
- (unsigned long long)internalUserClassification;

@end
