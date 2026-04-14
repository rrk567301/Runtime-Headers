@class NSObject;
@protocol TVPAVFPlayback;

@interface TVPRoutingManager : NSObject

@property (weak, nonatomic) NSObject<TVPAVFPlayback> *preferredPlayer;

+ (id)sharedInstance;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_updatePlaybackArbiterWithPlayer:(id)a0;

@end
