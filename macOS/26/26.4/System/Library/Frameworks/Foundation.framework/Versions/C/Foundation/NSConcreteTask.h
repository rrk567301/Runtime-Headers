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

- (BOOL)isRunning;
- (void)terminate;
- (id)standardOutput;
- (long long)suspendCount;
- (BOOL)resume;
- (void)setTerminationHandler:(id /* block */)a0;
- (int)_procid;
- (id)environment;
- (void)setQualityOfService:(long long)a0;
- (void)setArguments:(id)a0;
- (id)standardError;
- (int)terminationStatus;
- (void)terminateTask;
- (void)setEnvironment:(id)a0;
- (BOOL)isSpawnedProcessDisclaimed;
- (id)arguments;
- (id)currentDirectoryPath;
- (void)_withTaskDictionary:(id /* block */)a0;
- (BOOL)launchWithDictionary:(id)a0 error:(id *)a1;
- (void)setSpawnedProcessDisclaimed:(BOOL)a0;
- (BOOL)suspend;
- (long long)qualityOfService;
- (id)standardInput;
- (id)launchPath;
- (void)setLaunchPath:(id)a0;
- (id)launchRequirementData;
- (void)_setTerminationHandler:(id /* block */)a0;
- (void)setTaskDictionary:(id)a0;
- (void)setStartsNewProcessGroup:(BOOL)a0;
- (int)processIdentifier;
- (void)setStandardOutput:(id)a0;
- (void)interrupt;
- (void)launch;
- (BOOL)launchAndReturnError:(id *)a0;
- (long long)_platformExitInformation;
- (id)init;
- (void)setCurrentDirectoryPath:(id)a0;
- (void)setStandardInput:(id)a0;
- (id)taskDictionary;
- (void)setLaunchRequirementData:(id)a0;
- (void)waitUntilExit;
- (void)setPreferredArchitectures:(id)a0;
- (id)preferredArchitectures;
- (void)setStandardError:(id)a0;
- (id /* block */)terminationHandler;
- (void)dealloc;
- (long long)terminationReason;

@end
