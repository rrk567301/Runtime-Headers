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

+ (id)getProcessIds;
+ (int)processParentId:(int)a0;
+ (BOOL)isProcessRunning:(int)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)name;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (unsigned int)platform;
- (void)update;
- (int)pid;
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
- (id)envVars;
- (id)valueForEnvVar:(id)a0;
- (id)realAppName;
- (id)_infoFromCommandLine:(int)a0;
- (id)procTableName;
- (id)requestedAppName;
- (BOOL)isCFM;
- (BOOL)isApp;
- (BOOL)isMachO;
- (BOOL)isNative;
- (long long)compareByName:(id)a0;
- (long long)compareByUserAppName:(id)a0;

@end
