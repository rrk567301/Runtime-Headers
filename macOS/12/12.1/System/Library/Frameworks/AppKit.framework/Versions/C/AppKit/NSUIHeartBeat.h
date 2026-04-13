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
- (double)_startFrameTime;
- (double)_currentFrameTime;
- (void)addHeartBeatView:(id)a0;
- (void)removeHeartBeatView:(id)a0;
- (void)updateHeartBeatState;
- (void)_sessionDidBecomeActive;
- (void)_sessionDidResignActive;
- (void)_heartBeatViews;
- (double)birthDate;
- (void)disableHeartBeating;
- (void)reenableHeartBeating:(BOOL)a0;

@end
