@class NSObject, NSString, NSOperationQueue, NSDate, CKDContainer, CKDOperation;
@protocol OS_dispatch_group;

@interface CKDPlaceholderOperation : NSOperation {
    NSObject<OS_dispatch_group> *_group;
    int _executionState;
}

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) CKDOperation *realOperation;
@property (readonly, nonatomic) NSOperationQueue *targetOperationQueue;
@property (readonly, nonatomic) NSString *operationID;
@property (readonly, weak, nonatomic) CKDContainer *container;

- (id)description;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (char)isConcurrent;
- (char)isExecuting;
- (char)isFinished;
- (void)main;
- (id)CKDescriptionPropertiesWithPublic:(char)a0 private:(char)a1 shouldExpand:(char)a2;
- (id)ckShortDescription;
- (void)transitionToExecuting;
- (void)transitionToFinished;
- (id)_startDateString;
- (id)initWithOperation:(id)a0 targetOperationQueue:(id)a1;
- (id)statusReportWithIndent:(unsigned long long)a0;

@end
