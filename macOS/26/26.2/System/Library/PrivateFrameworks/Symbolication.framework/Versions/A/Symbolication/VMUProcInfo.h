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

- (long long)compare:(id)a0;
- (int)ppid;
- (BOOL)terminate;
- (id)firstArgument;
- (id)initWithPid:(int)a0;
- (id)arguments;
- (int)cpuType;
- (id)valueForEnvVar:(id)a0;
- (unsigned int)platform;
- (unsigned int)task;
- (BOOL)isRunning;
- (unsigned long long)hash;
- (id)procTableName;
- (BOOL)isEqual:(id)a0;
- (id)platformName;
- (id)initWithVMUTask:(id)a0;
- (id)envVars;
- (void).cxx_destruct;
- (BOOL)isCFM;
- (id)userAppName;
- (long long)compareByUserAppName:(id)a0;
- (id)initWithTask:(unsigned int)a0;
- (id)description;
- (BOOL)isApp;
- (id)name;
- (void)update;
- (BOOL)isMachO;
- (long long)compareByName:(id)a0;
- (BOOL)isZombie;
- (id)realAppName;
- (int)pid;
- (BOOL)isNative;
- (id)requestedAppName;
- (id)_infoFromCommandLine:(int)a0;
- (BOOL)signal:(int)a0;
- (struct timeval { long long x0; int x1; })startTime;
- (void)dealloc;

@end
