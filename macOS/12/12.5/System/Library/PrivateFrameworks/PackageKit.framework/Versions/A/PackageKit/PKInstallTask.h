@class NSString, NSTask, NSFileHandle, NSLock;

@interface PKInstallTask : NSObject {
    NSTask *_task;
    NSString *_logPrefix;
    NSFileHandle *_outputReadHandle;
    NSString *_partialLine;
    BOOL _logTaskOutput;
    NSLock *_logLock;
}

@property BOOL logOnlyStandardError;

+ (id)taskWithLaunchPath:(id)a0 arguments:(id)a1 currentDirectoryPath:(id)a2 logWithPrefix:(id)a3 qualityOfService:(unsigned int)a4 environmentDictionary:(id)a5 withCambriaTranslation:(long long)a6;
+ (id)taskWithLaunchPath:(id)a0 arguments:(id)a1 currentDirectoryPath:(id)a2 logWithPrefix:(id)a3 qualityOfService:(unsigned int)a4;

- (int)run;
- (void)dealloc;
- (id)task;
- (id)initWithTask:(id)a0 logWithPrefix:(id)a1;

@end
