@class NSString, NSArray;

@interface VMUProcInfo : NSObject {
    unsigned int _task;
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

+ (id)getProcessIds;
+ (BOOL)isProcessRunning:(int)a0;
+ (int)processParentId:(int)a0;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (int)pid;
- (unsigned int)platform;
- (void)update;
- (id)arguments;
- (struct timeval { long long x0; int x1; })startTime;
- (BOOL)signal:(int)a0;
- (BOOL)isRunning;
- (BOOL)terminate;
- (id)initWithTask:(unsigned int)a0;
- (id)firstArgument;
- (id)initWithPid:(int)a0;
- (int)cpuType;
- (unsigned int)task;
- (BOOL)isZombie;
- (int)ppid;
- (id)userAppName;
- (id)platformName;
- (id)valueForEnvVar:(id)a0;
- (id)envVars;
- (BOOL)isMachO;
- (id)_infoFromCommandLine:(int)a0;
- (long long)compareByName:(id)a0;
- (long long)compareByUserAppName:(id)a0;
- (BOOL)isApp;
- (BOOL)isCFM;
- (BOOL)isNative;
- (id)procTableName;
- (id)realAppName;
- (id)requestedAppName;

@end
