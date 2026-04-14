@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface NSConcreteTask : NSTask {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_dictionary;
    id /* block */ _terminationHandler;
    NSObject<OS_dispatch_source> *_dsrc;
    long long _suspendCount;
    int _pid;
    _Atomic unsigned long long __exitRunningInfo;
    char _qos;
    _Atomic BOOL _isSpawnedProcessDisclaimed;
}

- (void)terminate;
- (void)setArguments:(id)a0;
- (id)arguments;
- (long long)suspendCount;
- (BOOL)isRunning;
- (void)setQualityOfService:(long long)a0;
- (int)_procid;
- (id)launchRequirementData;
- (void)setEnvironment:(id)a0;
- (void)_withTaskDictionary:(id /* block */)a0;
- (BOOL)resume;
- (void)setStandardInput:(id)a0;
- (id)environment;
- (BOOL)suspend;
- (id)preferredArchitectures;
- (void)waitUntilExit;
- (void)setLaunchPath:(id)a0;
- (id /* block */)terminationHandler;
- (long long)terminationReason;
- (BOOL)launchAndReturnError:(id *)a0;
- (id)standardOutput;
- (long long)qualityOfService;
- (void)terminateTask;
- (void)setPreferredArchitectures:(id)a0;
- (void)_setTerminationHandler:(id /* block */)a0;
- (id)standardError;
- (void)interrupt;
- (id)taskDictionary;
- (id)standardInput;
- (void)setStartsNewProcessGroup:(BOOL)a0;
- (void)dealloc;
- (int)processIdentifier;
- (int)terminationStatus;
- (void)setStandardOutput:(id)a0;
- (BOOL)isSpawnedProcessDisclaimed;
- (void)setStandardError:(id)a0;
- (void)setTaskDictionary:(id)a0;
- (BOOL)launchWithDictionary:(id)a0 error:(id *)a1;
- (void)setLaunchRequirementData:(id)a0;
- (void)launch;
- (long long)_platformExitInformation;
- (void)setCurrentDirectoryPath:(id)a0;
- (id)currentDirectoryPath;
- (void)setSpawnedProcessDisclaimed:(BOOL)a0;
- (id)launchPath;
- (void)setTerminationHandler:(id /* block */)a0;
- (id)init;

@end
