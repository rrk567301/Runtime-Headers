@interface SKGEventsProfiler : NSObject

@property (nonatomic) BOOL enabled;

+ (id)sharedInstance;
+ (void)initialize;

- (id)initWithEnabled:(BOOL)a0;
- (BOOL)profileCodeWithType:(id)a0 kind:(int)a1 block:(id /* block */)a2;
- (unsigned long long)convertMachTimeToMilliseconds:(unsigned long long)a0;
- (void)endProfilingWithType:(id)a0 outcome:(id)a1;
- (void)logResultWithType:(id)a0 outcome:(id)a1 elapsedTime:(unsigned long long)a2 kind:(int)a3;
- (void)setupTimebaseInfo;
- (void)startProfilingWithType:(id)a0 kind:(int)a1;

@end
