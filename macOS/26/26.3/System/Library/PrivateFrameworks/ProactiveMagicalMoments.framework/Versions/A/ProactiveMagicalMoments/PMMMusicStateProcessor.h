@class PMMMusicContainer, NSObject;
@protocol OS_dispatch_queue;

@interface PMMMusicStateProcessor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL inCar;
@property (retain, nonatomic) PMMMusicContainer *lastPlayed;
@property (retain, nonatomic) PMMMusicContainer *lastPlayedInCar;

+ (id)shared;

- (void)_initNowPlayingPause;
- (id)init;
- (void)_persist;
- (void)lastPlayedWithHandler:(id /* block */)a0;
- (id)_init;
- (void).cxx_destruct;
- (void)lastPlayedInCarWithHandler:(id /* block */)a0;
- (void)_initStarkConnect;
- (void)_initStarkDisconnect;
- (void)_handlePause;
- (void)_handlePlay;
- (void)_initNowPlayingPlay;

@end
