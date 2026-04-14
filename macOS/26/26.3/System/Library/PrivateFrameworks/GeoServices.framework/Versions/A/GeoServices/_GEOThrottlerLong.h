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

- (BOOL)isExpired;
- (id)captureState;
- (BOOL)addRequestTimestamp;
- (double)expiresAt;
- (double)timeUntilReset;
- (id)initWithKeyPath:(id)a0 requestCount:(unsigned long long)a1 interval:(double)a2 savedState:(id)a3;
- (id)userInfoForError;
- (unsigned int)maxReqCount;
- (void).cxx_destruct;
- (id)initWithCount:(unsigned long long)a0 interval:(double)a1;
- (void)loadState:(id)a0;
- (unsigned long long)remainingEntries;

@end
