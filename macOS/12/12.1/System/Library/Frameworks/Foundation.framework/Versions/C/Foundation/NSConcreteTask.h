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

- (void)dealloc;
- (id)init;
- (BOOL)resume;
- (void)setQualityOfService:(long long)a0;
- (int)processIdentifier;
- (void)setArguments:(id)a0;
- (void)setEnvironment:(id)a0;
- (id)arguments;
- (BOOL)suspend;
- (id)currentDirectoryPath;
- (id)environment;
- (long long)qualityOfService;
- (void)setCurrentDirectoryPath:(id)a0;
- (id)launchPath;
- (void)setLaunchPath:(id)a0;
- (BOOL)launchWithDictionary:(id)a0 error:(id *)a1;
- (void)setTerminationHandler:(id /* block */)a0;
- (id /* block */)terminationHandler;
- (int)terminationStatus;
- (long long)terminationReason;
- (BOOL)isRunning;
- (void)launch;
- (BOOL)launchAndReturnError:(id *)a0;
- (void)interrupt;
- (void)terminate;
- (long long)suspendCount;
- (void)setStandardInput:(id)a0;
- (void)setStandardOutput:(id)a0;
- (void)setStandardError:(id)a0;
- (id)standardInput;
- (id)standardOutput;
- (id)standardError;
- (void)setSpawnedProcessDisclaimed:(BOOL)a0;
- (BOOL)isSpawnedProcessDisclaimed;
- (void)_setTerminationHandler:(id /* block */)a0;
- (void)_withTaskDictionary:(id /* block */)a0;
- (long long)_platformExitInformation;
- (void)waitUntilExit;
- (void)setPreferredArchitectures:(id)a0;
- (id)preferredArchitectures;
- (void)setTaskDictionary:(id)a0;
- (id)taskDictionary;
- (void)terminateTask;
- (int)_procid;
- (void)setStartsNewProcessGroup:(BOOL)a0;

@end
