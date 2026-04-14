@class FCTime;

@interface FCTimeRange : NSObject {
    FCTime *_startTime;
    FCTime *_endTime;
}

+ (id)timeRangeWithStartTime:(id)a0 endTime:(id)a1;
+ (id)timeRangeWithDictionary:(id)a0;

- (id)endTime;
- (id)initWithDictionary:(id)a0;
- (id)plistRepresentation;
- (void)dealloc;
- (id)initWithStartTime:(id)a0 endTime:(id)a1;
- (id)startTime;
- (long long)compare:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)wraps;
- (BOOL)includesTime:(id)a0;

@end
