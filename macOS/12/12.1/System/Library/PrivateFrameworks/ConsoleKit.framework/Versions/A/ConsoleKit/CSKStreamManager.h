@class NSOperationQueue;

@interface CSKStreamManager : NSObject

@property (class, readonly) CSKStreamManager *sharedManager;

@property (readonly, nonatomic) NSOperationQueue *operationQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancelAllStreams;
- (void)scheduleStream:(id)a0;
- (void)cancelStream:(id)a0;
- (void)pauseStream:(id)a0;
- (void)resumeStream:(id)a0;

@end
