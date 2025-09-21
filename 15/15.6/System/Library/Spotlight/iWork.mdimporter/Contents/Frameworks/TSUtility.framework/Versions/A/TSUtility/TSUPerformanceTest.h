@class NSString;

@interface TSUPerformanceTest : NSObject {
    SEL mSelector;
    id mTarget;
}

@property (readonly, nonatomic) NSString *name;
@property (nonatomic) struct TSUOpstat_s { char running; unsigned long long count; struct timeval { long long tv_sec; int tv_usec; } min_time; struct timeval { long long tv_sec; int tv_usec; } max_time; struct timeval { long long tv_sec; int tv_usec; } total_time; struct timeval { long long tv_sec; int tv_usec; } last_time; } timing;
@property (nonatomic) double goalTime;
@property (nonatomic) double precision;
@property (nonatomic) char quiet;
@property (readonly, nonatomic) char passed;

+ (id)csvHeader;

- (void)dealloc;
- (void)run;
- (void)report;
- (id)csvString;
- (id)initWithName:(id)a0 selector:(SEL)a1 target:(id)a2 goalTime:(double)a3;

@end
