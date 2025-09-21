@class NSString;

@interface GEORingThrottler : NSObject <GEOThrottler> {
    struct vector<(anonymous namespace)::Timestamp, std::allocator<(anonymous namespace)::Timestamp>> { struct Timestamp *__begin_; struct Timestamp *__end_; struct Timestamp *__cap_; } _lastRequestTimes;
    unsigned int _currentIndex;
}

@property (readonly, nonatomic) double timeWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isExpired;
- (id)initWithCount:(unsigned long long)a0 interval:(double)a1;
- (unsigned long long)remainingEntries;
- (double)timeUntilReset;
- (id)userInfoForError;
- (id).cxx_construct;
- (BOOL)addRequestTimestamp;
- (unsigned int)maxReqCount;
- (void).cxx_destruct;

@end
