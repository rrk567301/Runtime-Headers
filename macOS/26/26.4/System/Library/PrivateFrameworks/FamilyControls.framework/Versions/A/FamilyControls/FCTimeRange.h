@class FCTime;

@interface FCTimeRange : NSObject {
    FCTime *_startTime;
    FCTime *_endTime;
}

+ (id)timeRangeWithStartTime:(id)a0 endTime:(id)a1;
+ (id)timeRangeWithDictionary:(id)a0;

- (id)startTime;
- (id)endTime;
- (id)plistRepresentation;
- (id)initWithDictionary:(id)a0;
- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithStartTime:(id)a0 endTime:(id)a1;
- (id)description;
- (void)dealloc;
- (BOOL)wraps;
- (BOOL)includesTime:(id)a0;

@end
