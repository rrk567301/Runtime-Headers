@class OSLaunchdJob;

@interface _LSApplicationLoadedJobMonitor : NSObject

@property (readonly, retain) OSLaunchdJob *job;
@property (readonly, retain) id /* block */ block;

+ (id)jobMonitorForJobArray:(id)a0 block:(id /* block */)a1;

- (void)start;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithJobs:(id)a0 block:(id /* block */)a1;

@end
