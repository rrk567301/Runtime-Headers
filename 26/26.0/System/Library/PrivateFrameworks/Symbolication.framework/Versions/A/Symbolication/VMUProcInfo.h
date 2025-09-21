@class VMUTask, NSString, NSArray;

@interface VMUProcInfo : NSObject {
    unsigned int _task;
    VMUTask *_vmuTask;
    NSString *_name;
    NSArray *_arguments;
    NSArray *_envVars;
    NSString *_procTableName;
    NSString *_realAppName;
    NSString *_requestedAppName;
    NSString *_firstArg;
    int _pid;
    int _ppid;
    struct timeval { long long tv_sec; int tv_usec; } _startTime;
    BOOL _isZombie;
}

@property (readonly, nonatomic) BOOL shouldAnalyzeWithCorpse;
@property (readonly, nonatomic) BOOL isSemiCriticalProcess;
@property (readonly, nonatomic) BOOL isSemiCriticalProcessWithNoTimeLimit;

+ (id)getProcessIds;
+ (int)processParentId:(int)a0;

- (id)initWithTask:(unsigned int)a0;
- (BOOL)terminate;
- (id)requestedAppName;
- (id)envVars;
- (id)initWithPid:(int)a0;
- (id)arguments;
- (id)userAppName;
- (void)dealloc;
- (BOOL)isNative;
- (id)firstArgument;
- (id)_infoFromCommandLine:(int)a0;
- (struct timeval { long long x0; int x1; })startTime;
- (long long)compareByUserAppName:(id)a0;
- (int)pid;
- (BOOL)signal:(int)a0;
- (BOOL)isCFM;
- (BOOL)isApp;
- (long long)compare:(id)a0;
- (id)initWithVMUTask:(id)a0;
- (id)procTableName;
- (id)valueForEnvVar:(id)a0;
- (BOOL)isRunning;
- (int)ppid;
- (id)platformName;
- (id)description;
- (void)update;
- (long long)compareByName:(id)a0;
- (id)name;
- (int)cpuType;
- (unsigned int)task;
- (id)realAppName;
- (BOOL)isZombie;
- (unsigned int)platform;
- (BOOL)isMachO;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
