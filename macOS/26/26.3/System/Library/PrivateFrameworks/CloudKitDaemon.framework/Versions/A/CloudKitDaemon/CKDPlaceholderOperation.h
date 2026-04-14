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
@property (readonly, nonatomic, getter=isAnonymous) BOOL anonymous;

- (id)ckShortDescription;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (void)cancel;
- (BOOL)isFinished;
- (void)start;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)description;
- (void)main;
- (void)transitionToExecuting;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 targetOperationQueue:(id)a1;
- (void)transitionToFinished;
- (id)statusReportWithIndent:(unsigned long long)a0;
- (id)_startDateString;

@end
