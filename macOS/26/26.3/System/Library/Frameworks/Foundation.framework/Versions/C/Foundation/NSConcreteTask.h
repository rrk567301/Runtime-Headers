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

- (void)setQualityOfService:(long long)a0;
- (void)setArguments:(id)a0;
- (long long)qualityOfService;
- (id /* block */)terminationHandler;
- (long long)_platformExitInformation;
- (id)currentDirectoryPath;
- (void)setSpawnedProcessDisclaimed:(BOOL)a0;
- (BOOL)suspend;
- (void)setEnvironment:(id)a0;
- (id)arguments;
- (long long)suspendCount;
- (void)setLaunchPath:(id)a0;
- (BOOL)launchWithDictionary:(id)a0 error:(id *)a1;
- (int)processIdentifier;
- (id)init;
- (id)launchRequirementData;
- (long long)terminationReason;
- (void)terminate;
- (BOOL)isSpawnedProcessDisclaimed;
- (id)standardOutput;
- (BOOL)resume;
- (id)preferredArchitectures;
- (id)standardInput;
- (id)environment;
- (void)launch;
- (void)setStandardError:(id)a0;
- (void)_setTerminationHandler:(id /* block */)a0;
- (int)terminationStatus;
- (id)launchPath;
- (void)dealloc;
- (void)setTerminationHandler:(id /* block */)a0;
- (BOOL)launchAndReturnError:(id *)a0;
- (int)_procid;
- (void)terminateTask;
- (void)setStandardOutput:(id)a0;
- (void)setTaskDictionary:(id)a0;
- (void)setPreferredArchitectures:(id)a0;
- (void)interrupt;
- (void)setLaunchRequirementData:(id)a0;
- (id)standardError;
- (id)taskDictionary;
- (void)waitUntilExit;
- (BOOL)isRunning;
- (void)_withTaskDictionary:(id /* block */)a0;
- (void)setCurrentDirectoryPath:(id)a0;
- (void)setStandardInput:(id)a0;
- (void)setStartsNewProcessGroup:(BOOL)a0;

@end
