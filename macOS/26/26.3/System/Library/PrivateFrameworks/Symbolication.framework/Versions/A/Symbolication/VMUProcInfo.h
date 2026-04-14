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

- (id)valueForEnvVar:(id)a0;
- (int)cpuType;
- (id)initWithTask:(unsigned int)a0;
- (BOOL)signal:(int)a0;
- (void)update;
- (id)arguments;
- (id)description;
- (unsigned int)task;
- (BOOL)terminate;
- (unsigned int)platform;
- (id)envVars;
- (long long)compare:(id)a0;
- (long long)compareByName:(id)a0;
- (BOOL)isMachO;
- (id)name;
- (BOOL)isCFM;
- (int)ppid;
- (id)initWithPid:(int)a0;
- (id)platformName;
- (BOOL)isApp;
- (id)firstArgument;
- (void).cxx_destruct;
- (id)procTableName;
- (id)userAppName;
- (void)dealloc;
- (id)requestedAppName;
- (int)pid;
- (BOOL)isEqual:(id)a0;
- (BOOL)isZombie;
- (unsigned long long)hash;
- (id)realAppName;
- (id)_infoFromCommandLine:(int)a0;
- (BOOL)isNative;
- (BOOL)isRunning;
- (id)initWithVMUTask:(id)a0;
- (long long)compareByUserAppName:(id)a0;
- (struct timeval { long long x0; int x1; })startTime;

@end
