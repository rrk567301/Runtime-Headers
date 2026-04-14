@class NSObject, NSString, NSOperationQueue, NSDate, CKDContainer, CKDOperation;
@protocol OS_dispatch_group;

@interface CKDPlaceholderOperation : NSOperation {
    NSObject<OS_dispatch_group> *_group;
    int _executionState;
}

@property (retain, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) CKDOperation *realOperation;
@property (readonly, nonatomic) NSOperationQueue *targetOperationQueue;
@property (readonly, nonatomic) NSString *operationID;
@property (readonly, weak, nonatomic) CKDContainer *container;

- (id)description;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)main;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)ckShortDescription;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (void)transitionToExecuting;
- (void)transitionToFinished;
- (id)_startDateString;
- (id)statusReportWithIndent:(unsigned long long)a0;
- (id)initWithOperation:(id)a0 targetOperationQueue:(id)a1;

@end
