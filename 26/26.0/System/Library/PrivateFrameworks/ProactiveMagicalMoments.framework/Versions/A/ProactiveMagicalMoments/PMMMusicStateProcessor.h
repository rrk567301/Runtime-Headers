@class PMMMusicContainer, NSObject;
@protocol OS_dispatch_queue;

@interface PMMMusicStateProcessor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL inCar;
@property (retain, nonatomic) PMMMusicContainer *lastPlayed;
@property (retain, nonatomic) PMMMusicContainer *lastPlayedInCar;

+ (id)shared;

- (id)_init;
- (void)_handlePause;
- (void)_persist;
- (void)lastPlayedWithHandler:(id /* block */)a0;
- (void)_initNowPlayingPause;
- (id)init;
- (void)_handlePlay;
- (void)lastPlayedInCarWithHandler:(id /* block */)a0;
- (void)_initNowPlayingPlay;
- (void)_initStarkConnect;
- (void)_initStarkDisconnect;
- (void).cxx_destruct;

@end
