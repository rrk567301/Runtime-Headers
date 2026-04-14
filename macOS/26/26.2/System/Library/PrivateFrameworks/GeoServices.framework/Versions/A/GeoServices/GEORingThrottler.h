@class NSString;

@interface GEORingThrottler : NSObject <GEOThrottler> {
    struct vector<(anonymous namespace)::Timestamp, std::allocator<(anonymous namespace)::Timestamp>> { struct Timestamp *__begin_; struct Timestamp *__end_; struct { struct Timestamp *__cap_; } ; } _lastRequestTimes;
    unsigned int _currentIndex;
}

@property (readonly, nonatomic) double timeWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCount:(unsigned long long)a0 interval:(double)a1;
- (BOOL)addRequestTimestamp;
- (BOOL)isExpired;
- (void).cxx_destruct;
- (unsigned int)maxReqCount;
- (id).cxx_construct;
- (id)userInfoForError;
- (double)timeUntilReset;
- (unsigned long long)remainingEntries;

@end
