@class PMMMusicContainer, NSObject;
@protocol OS_dispatch_queue;

@interface PMMMusicStateProcessor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL inCar;
@property (retain, nonatomic) PMMMusicContainer *lastPlayed;
@property (retain, nonatomic) PMMMusicContainer *lastPlayedInCar;

+ (id)shared;

- (void)_initStarkConnect;
- (void)lastPlayedInCarWithHandler:(id /* block */)a0;
- (void)_initNowPlayingPause;
- (id)_init;
- (void)_initStarkDisconnect;
- (void).cxx_destruct;
- (void)lastPlayedWithHandler:(id /* block */)a0;
- (void)_handlePause;
- (void)_initNowPlayingPlay;
- (void)_handlePlay;
- (void)_persist;
- (id)init;

@end
