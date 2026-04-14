@class FCTime;

@interface FCTimeRange : NSObject {
    FCTime *_startTime;
    FCTime *_endTime;
}

+ (id)timeRangeWithStartTime:(id)a0 endTime:(id)a1;
+ (id)timeRangeWithDictionary:(id)a0;

- (long long)compare:(id)a0;
- (id)endTime;
- (BOOL)isEqual:(id)a0;
- (id)initWithStartTime:(id)a0 endTime:(id)a1;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)plistRepresentation;
- (id)startTime;
- (void)dealloc;
- (BOOL)wraps;
- (BOOL)includesTime:(id)a0;

@end
