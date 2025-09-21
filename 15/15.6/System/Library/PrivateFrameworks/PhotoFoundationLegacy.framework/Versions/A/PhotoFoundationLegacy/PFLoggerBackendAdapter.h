@class NSString, NSObject;
@protocol OS_os_transaction;

@interface PFLoggerBackendAdapter : NSObject <PFLoggerBackend> {
    _Atomic unsigned long long _pendingTransactionCount;
    NSObject<OS_os_transaction> *_transaction;
}

@property char runningUnderDebugger;
@property (readonly, nonatomic) char allowsConcurrentAccess;
@property (readonly, nonatomic) char formatsMessage;
@property (readonly, nonatomic) char outputsToDebuggerConsole;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)allFileSizeMaxBytesFromString:(id)a0;
+ (id)backendsFromUserDefaultsWithLogLevel:(int)a0;
+ (long long)fileSizeMaxBytesFromString:(id)a0;
+ (long long)parseByteSizeValueForKey:(id)a0 inString:(id)a1;
+ (id)pathWithoutParametersFromString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)beginTransaction;
- (void)endTransaction;
- (void)flushWithCompletionHandler:(id /* block */)a0;
- (void)logFromCodeLocation:(struct { char *x0; char *x1; char *x2; char *x3; void *x4; })a0 facility:(id)a1 subsystem:(id)a2 level:(int)a3 message:(id)a4 format:(id)a5 args:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a6;

@end
