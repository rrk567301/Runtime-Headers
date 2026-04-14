@class NSMutableSet;

@interface SiriUIMediaPauser : NSObject

@property (class, readonly) NSMutableSet *pausedClients;
@property (class) BOOL duckAudio;
@property (class) BOOL isSpeaking;
@property (class) BOOL mediaPaused;
@property (class) BOOL fanDuckingEnabled;

+ (id)_fanDispatchQueue;
+ (void)reconcileDuckingState;
+ (void)pauseWithClientLoop:(BOOL)a0;

@end
