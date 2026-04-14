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
}

@property (readonly, nonatomic) BOOL shouldAnalyzeWithCorpse;
@property (readonly, nonatomic) BOOL isSemiCriticalProcess;

+ (id)getProcessIds;
+ (BOOL)isProcessRunning:(int)a0;
+ (int)processParentId:(int)a0;

- (void)dealloc;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (int)pid;
- (unsigned int)platform;
- (void)update;
- (id)arguments;
- (struct timeval { long long x0; int x1; })startTime;
- (BOOL)isRunning;
- (BOOL)terminate;
- (BOOL)signal:(int)a0;
- (id)initWithTask:(unsigned int)a0;
- (id)firstArgument;
- (id)initWithPid:(int)a0;
- (int)cpuType;
- (unsigned int)task;
- (int)ppid;
- (id)userAppName;
- (id)platformName;
- (id)valueForEnvVar:(id)a0;
- (id)procTableName;
- (id)_infoFromCommandLine:(int)a0;
- (id)realAppName;
- (id)requestedAppName;
- (id)envVars;
- (BOOL)isApp;
- (BOOL)isMachO;
- (BOOL)isCFM;
- (BOOL)isNative;
- (long long)compareByName:(id)a0;
- (long long)compareByUserAppName:(id)a0;

@end
