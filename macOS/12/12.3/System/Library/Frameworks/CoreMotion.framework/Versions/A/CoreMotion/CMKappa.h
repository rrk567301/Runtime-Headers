@class CMKappaInternal;

@interface CMKappa : NSObject

@property (readonly, nonatomic) CMKappaInternal *_internal;

+ (BOOL)areStatsAvailable;

- (void)dealloc;
- (id)init;
- (int)getState;
- (id)sendStatsDataToUrl:(id)a0;
- (void)sendStatsDataToUrl:(id)a0 onCompletion:(id /* block */)a1;
- (void)startKappaUpdatesForItem:(long long)a0 withHandler:(id /* block */)a1;
- (void)stopKappaUpdates;
- (void)sendConfigNumFastAccel:(int)a0 numAccel:(int)a1 numPressure:(int)a2 numDM:(int)a3 numMag:(int)a4 numAudio:(int)a5 timeout:(int)a6;
- (void)sendAPConfigNumFastAccel:(int)a0 numAccel:(int)a1 numPressure:(int)a2 numDM:(int)a3 numMag:(int)a4 numAudio:(int)a5 timeout:(int)a6;
- (void)sendCmd:(int)a0;
- (void)sendAPCmd:(int)a0;

@end
