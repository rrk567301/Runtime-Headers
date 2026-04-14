@class AFInstanceContext, NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriPreferences : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    AFInstanceContext *_instanceContext;
}

+ (id)sharedPreferences;

- (id)init;
- (void).cxx_destruct;
- (id)overrideAudioSessionActiveDelay;
- (id)initWithInstanceContext:(id)a0;
- (unsigned long long)internalUserClassification;
- (id)serverAudioSessionActivationDelay;
- (id)serverAudioSessionActivationDelayAboveMediaPlaybackVolumeThreshold;
- (id)serverMediaPlaybackVolumeThresholdForAudioSessionActivationDelay;

@end
