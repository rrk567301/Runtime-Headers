@class NSString;

@interface NSExceptionHandler : NSObject {
    id _delegate;
    NSString *_exceptionLoggingConnectionName;
    struct { unsigned short exceptionHandlingMask : 10; unsigned short reserved : 10; unsigned char exceptionHangingMask : 5; unsigned char reserved1 : 5; unsigned char drwh : 1; unsigned char drwl : 1; } _ehFlags;
    void *_reserved;
}

+ (void)initialize;
+ (void)_setLocalVersion:(int)a0;
+ (id)defaultExceptionHandler;

- (void)dealloc;
- (id)init;
- (void)finalize;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)host;
- (int)processIdentifier;
- (id)processInfo;
- (void)setExceptionLoggingConnectionName:(id)a0;
- (id)exceptionLoggingConnectionName;
- (void)setExceptionHandlingMask:(unsigned long long)a0;
- (unsigned long long)exceptionHandlingMask;
- (void)setExceptionHangingMask:(unsigned long long)a0;
- (unsigned long long)exceptionHangingMask;
- (void)_handleException:(id)a0 mask:(unsigned long long)a1;
- (void)_createAndHandleUncaughtSystemExceptionWithSignal:(int)a0 pc:(void *)a1 sp:(void *)a2;

@end
