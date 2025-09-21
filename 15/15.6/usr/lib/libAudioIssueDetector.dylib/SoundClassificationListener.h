@interface SoundClassificationListener : NSObject {
    char isFalsePositiveState;
    char isListenerON;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (char)isFalsePositive;
- (void)startListen;
- (void)stopListen;

@end
