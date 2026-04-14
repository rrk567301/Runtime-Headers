@interface SoundClassificationListener : NSObject {
    BOOL isFalsePositiveState;
    BOOL isListenerON;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (BOOL)isFalsePositive;
- (void)startListen;
- (void)stopListen;

@end
