@class NSTimer, NSMutableSet;

@interface NSUIHeartBeat : NSObject {
    double _currentDate;
    double _birthDate;
    double _lastDate;
    NSMutableSet *_clients;
    NSTimer *_heartBeatTimer;
    unsigned short _disableCount;
    struct { unsigned char _sessionIsActive : 1; unsigned int _reserved : 31; } _hbFlags;
}

+ (id)sharedHeartBeat;
+ (double)heartBeatCycle;
+ (void)setHeartBeatCycle:(double)a0;
+ (BOOL)isHeartBeatThread;

- (void)dealloc;
- (id)init;
- (void)_sessionDidBecomeActive;
- (void)_sessionDidResignActive;
- (void)_heartBeatViews;
- (void)addHeartBeatView:(id)a0;
- (void)removeHeartBeatView:(id)a0;
- (double)birthDate;
- (void)updateHeartBeatState;
- (void)disableHeartBeating;
- (void)reenableHeartBeating:(BOOL)a0;
- (double)_currentFrameTime;
- (double)_startFrameTime;

@end
