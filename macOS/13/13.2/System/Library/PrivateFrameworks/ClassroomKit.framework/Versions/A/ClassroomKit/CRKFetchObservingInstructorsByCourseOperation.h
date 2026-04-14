@class CATRemoteTaskOperation;
@protocol CRKRequestPerformingProtocol;

@interface CRKFetchObservingInstructorsByCourseOperation : CATOperation

@property (readonly, nonatomic) id<CRKRequestPerformingProtocol> requestPerformer;
@property (retain, nonatomic) CATRemoteTaskOperation *fetchInstructorsOperation;
@property (retain, nonatomic) CATRemoteTaskOperation *fetchCoursesOperation;

- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (BOOL)isAsynchronous;
- (void)operationsDidComplete:(id)a0;
- (id)initWithRequestPerformer:(id)a0;
- (void)compileResultsWithFetchCoursesResult:(id)a0 fetchScreenObserversResult:(id)a1;

@end
