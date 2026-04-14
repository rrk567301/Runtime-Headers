@interface SoundClassificationListener : NSObject {
    BOOL isListenerON;
    struct SoundClassEvent { unsigned long long startTimeSecs; unsigned long long stopTimeSecs; unsigned long long type; } mLastSoundClassEvent;
    int mSoundClassEventIndex;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)getSubscription;
- (void)clearSoundClassEvents;
- (BOOL)isFalsePositive:(double)a0;
- (void)pullSoundClassEvents;
- (void)startListen;
- (void)stopListen;

@end
