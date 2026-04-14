@class NSString;

@interface _GEOThrottlerLong : NSObject <_GEOThrottler> {
    double _lastResetTime;
    double _lastUseTime;
    unsigned int _maxRequestCount;
    unsigned int _currentRequestCount;
}

@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) double timeWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)stateIsExpired:(id)a0;

- (double)expiresAt;
- (id)initWithCount:(unsigned long long)a0 interval:(double)a1;
- (BOOL)addRequestTimestamp;
- (BOOL)isExpired;
- (id)initWithKeyPath:(id)a0 requestCount:(unsigned long long)a1 interval:(double)a2 savedState:(id)a3;
- (void).cxx_destruct;
- (unsigned int)maxReqCount;
- (id)captureState;
- (id)userInfoForError;
- (void)loadState:(id)a0;
- (double)timeUntilReset;
- (unsigned long long)remainingEntries;

@end
