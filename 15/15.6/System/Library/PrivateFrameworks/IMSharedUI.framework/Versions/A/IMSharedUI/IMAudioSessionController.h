@interface IMAudioSessionController : NSObject

@property (getter=isActive) char active;
@property (getter=isDirty) char dirty;
@property unsigned long long options;
@property (readonly) char shouldUseSpeaker;
@property (readonly) char shouldStopPlayingWhenSilent;
@property (readonly) char shouldDuckOthers;

+ (id)sharedInstance;
+ (id)queue;
+ (id)__singleton__im;
+ (void)__setSingleton__im:(id)a0;

- (void)deactivate;
- (void)activateWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)configureAudioSessionWithOptions:(unsigned long long)a0;
- (void)setActive:(char)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;

@end
