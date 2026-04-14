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
- (BOOL)isSpawnedProcessDisclaimed;
- (long long)suspendCount;
- (void)setArguments:(id)a0;
- (long long)terminationReason;
- (void)setQualityOfService:(long long)a0;
- (id)arguments;
- (void)setTerminationHandler:(id /* block */)a0;
- (int)_procid;
- (id /* block */)terminationHandler;
- (id)launchRequirementData;
- (BOOL)launchWithDictionary:(id)a0 error:(id *)a1;
- (void)setLaunchRequirementData:(id)a0;
- (int)terminationStatus;
- (void)setCurrentDirectoryPath:(id)a0;
- (BOOL)isRunning;
- (id)launchPath;
- (int)processIdentifier;
- (void)terminateTask;
- (void)setTaskDictionary:(id)a0;
- (void)setPreferredArchitectures:(id)a0;
- (id)standardInput;
- (BOOL)suspend;
- (BOOL)launchAndReturnError:(id *)a0;
- (long long)_platformExitInformation;
- (void)interrupt;
- (id)standardOutput;
- (void)setEnvironment:(id)a0;
- (void)waitUntilExit;
- (BOOL)resume;
- (id)standardError;
- (void)setStandardOutput:(id)a0;
- (long long)qualityOfService;
- (id)preferredArchitectures;
- (void)setLaunchPath:(id)a0;
- (void)_setTerminationHandler:(id /* block */)a0;
- (void)setStandardInput:(id)a0;
- (void)setSpawnedProcessDisclaimed:(BOOL)a0;
- (id)taskDictionary;
- (void)setStartsNewProcessGroup:(BOOL)a0;
- (void)_withTaskDictionary:(id /* block */)a0;
- (id)environment;
- (void)setStandardError:(id)a0;
- (id)init;
- (id)currentDirectoryPath;
- (void)launch;
- (void)dealloc;

@end
