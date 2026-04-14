@class FCTime;

@interface FCTimeRange : NSObject {
    FCTime *_startTime;
    FCTime *_endTime;
}

+ (id)timeRangeWithStartTime:(id)a0 endTime:(id)a1;
+ (id)timeRangeWithDictionary:(id)a0;

- (id)endTime;
- (id)description;
- (id)plistRepresentation;
- (long long)compare:(id)a0;
- (id)initWithStartTime:(id)a0 endTime:(id)a1;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)startTime;
- (BOOL)wraps;
- (BOOL)includesTime:(id)a0;

@end
