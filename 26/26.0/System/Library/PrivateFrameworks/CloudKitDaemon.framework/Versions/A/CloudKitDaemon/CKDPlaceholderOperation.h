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

- (BOOL)isFinished;
- (void)main;
- (BOOL)isExecuting;
- (id)ckShortDescription;
- (void)start;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (BOOL)isConcurrent;
- (void)cancel;
- (void)transitionToExecuting;
- (void)transitionToFinished;
- (id)description;
- (id)_startDateString;
- (id)statusReportWithIndent:(unsigned long long)a0;
- (id)initWithOperation:(id)a0 targetOperationQueue:(id)a1;
- (void).cxx_destruct;

@end
