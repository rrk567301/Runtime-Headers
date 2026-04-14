@class NSString, NSFileHandle, NSTask;

@interface SUExternalTaskManager : NSObject {
    NSTask *_task;
    NSString *_logPrefix;
    BOOL _logOnlyStandardError;
    NSFileHandle *_outputReadHandle;
    NSString *_partialLine;
}

- (void)dealloc;
- (int)run;
- (void)_flushTaskOutput;
- (BOOL)_processTaskOutput:(id)a0;
- (void)_readTaskOutput:(id)a0;
- (id)initTaskWithLaunchPath:(id)a0 arguments:(id)a1 logWithPrefix:(id)a2;
- (id)initWithTask:(id)a0 logWithPrefix:(id)a1;

@end
