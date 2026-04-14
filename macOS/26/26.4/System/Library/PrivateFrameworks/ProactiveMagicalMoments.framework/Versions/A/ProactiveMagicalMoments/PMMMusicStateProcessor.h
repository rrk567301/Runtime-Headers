@class PMMMusicContainer, NSObject;
@protocol OS_dispatch_queue;

@interface PMMMusicStateProcessor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL inCar;
@property (retain, nonatomic) PMMMusicContainer *lastPlayed;
@property (retain, nonatomic) PMMMusicContainer *lastPlayedInCar;

+ (id)shared;

- (id)_init;
- (void)_persist;
- (void)_initNowPlayingPause;
- (void)_initStarkConnect;
- (void).cxx_destruct;
- (void)_handlePlay;
- (void)_initStarkDisconnect;
- (void)lastPlayedWithHandler:(id /* block */)a0;
- (id)init;
- (void)lastPlayedInCarWithHandler:(id /* block */)a0;
- (void)_handlePause;
- (void)_initNowPlayingPlay;

@end
