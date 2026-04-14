@class CKVSettings;

@interface CKVTaskController : NSObject {
    CKVSettings *_settings;
}

@property BOOL taskExecutionAllowed;

+ (id)daemonControllerWithSettings:(id)a0;
+ (id)adminControllerWithSettings:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isTaskExecutionAllowed;
- (void)prohibitTaskExecution;
- (void)allowTaskExecution;
- (id)initWithSettings:(id)a0 taskExecutionAllowed:(BOOL)a1;
- (BOOL)shouldExecuteTask:(unsigned short)a0;

@end
