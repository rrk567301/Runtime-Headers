@interface AMApplicationStub : NSObject

@property (retain) id applicationStubController;
@property (readonly, nonatomic) char stayOpen;
@property (nonatomic) char displayInMenuBar;

- (id)init;
- (void).cxx_destruct;
- (void)_presentRecoverableErrorAndTerminateIfNeeded:(id)a0;
- (char)loadWorkflowAtPath:(id)a0 error:(id *)a1;
- (char)runWorkflowAtPath:(id)a0 withInput:(id)a1 error:(id *)a2;

@end
