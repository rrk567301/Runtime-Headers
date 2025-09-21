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
- (void)setStandardInput:(id)a0;
- (id)launchPath;
- (void)setQualityOfService:(long long)a0;
- (void)setArguments:(id)a0;
- (long long)qualityOfService;
- (id)arguments;
- (id)taskDictionary;
- (void)setEnvironment:(id)a0;
- (id)standardOutput;
- (void)dealloc;
- (void)interrupt;
- (void)terminateTask;
- (void)setStartsNewProcessGroup:(BOOL)a0;
- (void)setSpawnedProcessDisclaimed:(BOOL)a0;
- (BOOL)suspend;
- (id)preferredArchitectures;
- (int)processIdentifier;
- (int)_procid;
- (id)currentDirectoryPath;
- (BOOL)resume;
- (id)init;
- (long long)suspendCount;
- (id)standardError;
- (BOOL)isSpawnedProcessDisclaimed;
- (void)_withTaskDictionary:(id /* block */)a0;
- (BOOL)isRunning;
- (void)setPreferredArchitectures:(id)a0;
- (int)terminationStatus;
- (void)waitUntilExit;
- (void)setStandardOutput:(id)a0;
- (long long)_platformExitInformation;
- (void)setTaskDictionary:(id)a0;
- (id)launchRequirementData;
- (BOOL)launchAndReturnError:(id *)a0;
- (void)setLaunchRequirementData:(id)a0;
- (id /* block */)terminationHandler;
- (long long)terminationReason;
- (void)setLaunchPath:(id)a0;
- (void)setTerminationHandler:(id /* block */)a0;
- (id)environment;
- (void)launch;
- (void)setCurrentDirectoryPath:(id)a0;
- (void)setStandardError:(id)a0;
- (BOOL)launchWithDictionary:(id)a0 error:(id *)a1;
- (void)_setTerminationHandler:(id /* block */)a0;
- (id)standardInput;

@end
