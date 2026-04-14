@class NSMutableArray;

@interface ADTimeProfiler : NSObject

@property (retain, nonatomic) NSMutableArray *logArray;

+ (unsigned long long)currentTime;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)stop:(id)a0;
- (id)log;
- (void)start:(id)a0;
- (void)startForOperationWithName:(id)a0;
- (void)stopForOperationWithName:(id)a0;
- (id)valueDictForOperationName:(id)a0;
- (id)stringLog;
- (void)startWithUTFString:(const char *)a0;
- (void)stopWithUTFString:(const char *)a0;
- (void)printLog;

@end
