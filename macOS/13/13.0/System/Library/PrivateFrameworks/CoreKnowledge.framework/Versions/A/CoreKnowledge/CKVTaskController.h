@class CKVSettings;

@interface CKVTaskController : NSObject {
    CKVSettings *_settings;
}

@property BOOL taskExecutionAllowed;

+ (id)daemonControllerWithSettings:(id)a0;
+ (id)adminControllerWithSettings:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0 taskExecutionAllowed:(BOOL)a1;
- (void)allowTaskExecution;
- (void)prohibitTaskExecution;
- (BOOL)isTaskExecutionAllowed;
- (BOOL)shouldExecuteTask:(unsigned short)a0;

@end
