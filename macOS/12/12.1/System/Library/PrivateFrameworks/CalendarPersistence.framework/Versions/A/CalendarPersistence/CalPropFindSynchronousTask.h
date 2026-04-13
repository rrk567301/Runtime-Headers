@class NSSet, NSURL;

@interface CalPropFindSynchronousTask : CalSingleSynchronousTask

@property (retain) NSSet *responses;
@property (retain) NSURL *lastRedirectURL;

- (void).cxx_destruct;
- (void)executePropFindTask:(id)a0 usingTaskManager:(id)a1;
- (void)_setCompletionBlockOnTask:(id)a0;

@end
