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
    char _isZombie;
}

@property (readonly, nonatomic) char shouldAnalyzeWithCorpse;
@property (readonly, nonatomic) char isSemiCriticalProcess;
@property (readonly, nonatomic) char isSemiCriticalProcessWithNoTimeLimit;

+ (id)getProcessIds;
+ (int)processParentId:(int)a0;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (id)arguments;
- (long long)compare:(id)a0;
- (int)pid;
- (unsigned int)platform;
- (struct timeval { long long x0; int x1; })startTime;
- (char)signal:(int)a0;
- (char)isRunning;
- (char)terminate;
- (void)update;
- (id)initWithTask:(unsigned int)a0;
- (unsigned int)task;
- (id)firstArgument;
- (id)initWithPid:(int)a0;
- (int)cpuType;
- (char)isZombie;
- (int)ppid;
- (id)userAppName;
- (id)platformName;
- (id)valueForEnvVar:(id)a0;
- (id)envVars;
- (char)isMachO;
- (id)_infoFromCommandLine:(int)a0;
- (long long)compareByName:(id)a0;
- (long long)compareByUserAppName:(id)a0;
- (id)initWithVMUTask:(id)a0;
- (char)isApp;
- (char)isCFM;
- (char)isNative;
- (id)procTableName;
- (id)realAppName;
- (id)requestedAppName;

@end
