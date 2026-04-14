@class NSError;

@interface CalSingleSynchronousTask : NSObject

@property BOOL completed;
@property (retain) NSError *error;

- (void).cxx_destruct;
- (void)executeTask:(id)a0 usingTaskManager:(id)a1;
- (void)_setCompletionBlockOnTask:(id)a0;

@end
