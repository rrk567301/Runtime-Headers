@class AFInstanceContext, NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriPreferences : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    AFInstanceContext *_instanceContext;
}

+ (id)sharedPreferences;

- (id)initWithInstanceContext:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)internalUserClassification;
- (id)init;
- (id)overrideAudioSessionActiveDelay;
- (id)serverAudioSessionActivationDelay;
- (id)serverAudioSessionActivationDelayAboveMediaPlaybackVolumeThreshold;
- (id)serverMediaPlaybackVolumeThresholdForAudioSessionActivationDelay;

@end
