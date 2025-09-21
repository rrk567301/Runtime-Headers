@class NSMutableSet;

@interface SiriUIMediaPauser : NSObject

@property (class, readonly) NSMutableSet *pausedClients;
@property (class) char duckAudio;
@property (class) char isSpeaking;
@property (class) char mediaPaused;
@property (class) char fanDuckingEnabled;

+ (int)_audioDevice:(unsigned int)a0 shouldDuck:(char)a1;
+ (id)_fanDispatchQueue;
+ (void)pauseWithClientLoop:(char)a0;
+ (void)reconcileDuckingState;

@end
