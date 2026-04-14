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

- (struct timeval { long long x0; int x1; })startTime;
- (BOOL)isRunning;
- (id)initWithTask:(unsigned int)a0;
- (int)cpuType;
- (int)ppid;
- (BOOL)terminate;
- (BOOL)isApp;
- (id)platformName;
- (id)requestedAppName;
- (unsigned int)platform;
- (BOOL)signal:(int)a0;
- (id)initWithPid:(int)a0;
- (id)name;
- (long long)compareByName:(id)a0;
- (unsigned int)task;
- (void)update;
- (id)firstArgument;
- (BOOL)isCFM;
- (id)arguments;
- (long long)compare:(id)a0;
- (id)envVars;
- (BOOL)isEqual:(id)a0;
- (id)_infoFromCommandLine:(int)a0;
- (BOOL)isMachO;
- (id)initWithVMUTask:(id)a0;
- (id)valueForEnvVar:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)procTableName;
- (id)realAppName;
- (BOOL)isZombie;
- (long long)compareByUserAppName:(id)a0;
- (id)description;
- (BOOL)isNative;
- (void)dealloc;
- (int)pid;
- (id)userAppName;

@end
