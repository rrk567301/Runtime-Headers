@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface BMBlockMonitoring : NSObject {
    char _testing;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_persistencePath;
    long long _sandboxHandle;
    char _enabled;
    char _coreDumpsDisabled;
    _Atomic BOOL _presentAlert;
    long long _bootDebugFlags;
    NSString *_osVersion;
    unsigned long long _executionDuration;
    long long _panicPacing;
    NSObject<OS_os_log> *_logger;
    char _panicWithData;
    _Atomic unsigned int _deviceState;
    char _alreadyFaulted;
    NSString *_test_panicReason;
    unsigned char _test_panicDeny;
    unsigned char _test_resultType;
    char _test_allowPanic;
    char _test_alertShown;
    unsigned int _test_panicSleep;
    NSDictionary *_test_bootArgs;
    char _test_wasFirstFault;
    unsigned char _test_debuggerState;
}

+ (id)sharedManager;
+ (id)alertFileName;
+ (id)computePersistencePath:(long long *)a0 error:(id *)a1;
+ (id)monitorForTestingWithBootArgs:(id)a0;
+ (void)readEntitlement:(struct __CFString { } *)a0 withBlock:(id /* block */)a1;
+ (id)sanitizedSignature:(id)a0 maxLength:(long long)a1;
+ (id)signatureFileName;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cleanup;
- (void)_test_allowPanic:(char)a0;
- (id)_test_getAlertPath;
- (char)_test_getAlertShown;
- (char)_test_getAlreadyFaulted;
- (char)_test_getCoreDumpsDisabled;
- (unsigned char)_test_getDebuggerState;
- (char)_test_getEnabled;
- (id)_test_getOSVersion;
- (unsigned char)_test_getPanicDeny;
- (id)_test_getPanicReason;
- (char)_test_getPanicWithData;
- (char)_test_getPresentAlert;
- (unsigned char)_test_getResultType;
- (id)_test_getSignaturePath;
- (char)_test_getWasFirstFault;
- (void)_test_resetVariables;
- (void)_test_setDebuggerState:(unsigned char)a0;
- (void)_test_setEnabled:(char)a0;
- (void)_test_setExecutionDuration:(unsigned long long)a0;
- (void)_test_setOSVersion:(id)a0;
- (void)_test_setPanicPacing:(long long)a0;
- (void)_test_setPanicSleep:(unsigned int)a0;
- (void)_test_setPresentAlert:(char)a0;
- (id)alertPath;
- (void)executeBlockWithSignature:(const char *)a0 block:(id /* block */)a1;
- (void)executeBlockWithSignature:(const char *)a0 timeout:(unsigned long long)a1 options:(int)a2 block:(id /* block */)a3;
- (id)initForTesting:(char)a0 bootArgs:(id)a1;
- (char)isProcessBeingDebugged;
- (void)logFault:(id)a0 reason:(const char *)a1;
- (void)logPanicDeny:(id)a0 reason:(unsigned char)a1 demoted:(char)a2;
- (BOOL)parseBootArgInt:(id)a0 where:(long long *)a1;
- (void)showBootArgsAlertWithCheckingFirst:(char)a0;
- (id)signaturePath;
- (void)takeActionIfRelevant:(id)a0 thread_id:(unsigned long long)a1 timeout:(unsigned long long)a2 options:(int)a3 recovered:(_Atomic BOOL *)a4;

@end
