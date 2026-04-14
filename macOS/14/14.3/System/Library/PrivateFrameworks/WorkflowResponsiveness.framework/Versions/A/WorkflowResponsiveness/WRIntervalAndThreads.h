@class WRTimestampAndThread;

@interface WRIntervalAndThreads : NSObject

@property (readonly) WRTimestampAndThread *start;
@property (readonly) WRTimestampAndThread *end;

- (void).cxx_destruct;
- (id)initWithStart:(id)a0 end:(id)a1;

@end
