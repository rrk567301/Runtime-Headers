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

- (BOOL)terminate;
- (id)valueForEnvVar:(id)a0;
- (int)ppid;
- (id)arguments;
- (id)realAppName;
- (BOOL)isRunning;
- (id)initWithTask:(unsigned int)a0;
- (id)initWithPid:(int)a0;
- (long long)compareByName:(id)a0;
- (unsigned int)task;
- (int)cpuType;
- (long long)compare:(id)a0;
- (id)userAppName;
- (unsigned long long)hash;
- (id)requestedAppName;
- (long long)compareByUserAppName:(id)a0;
- (id)platformName;
- (id)envVars;
- (unsigned int)platform;
- (BOOL)isZombie;
- (id)description;
- (BOOL)isApp;
- (id)initWithVMUTask:(id)a0;
- (void)dealloc;
- (BOOL)signal:(int)a0;
- (BOOL)isCFM;
- (BOOL)isMachO;
- (void).cxx_destruct;
- (id)procTableName;
- (id)firstArgument;
- (id)name;
- (id)_infoFromCommandLine:(int)a0;
- (BOOL)isEqual:(id)a0;
- (int)pid;
- (struct timeval { long long x0; int x1; })startTime;
- (void)update;
- (BOOL)isNative;

@end
