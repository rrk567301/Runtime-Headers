@interface NSExceptionHandler : NSObject {
    id _delegate;
    struct { unsigned short exceptionHandlingMask : 10; unsigned short reserved : 10; unsigned char exceptionHangingMask : 5; unsigned char reserved1 : 5; unsigned char drwh : 1; unsigned char drwl : 1; } _ehFlags;
    void *_reserved;
}

+ (void)initialize;
+ (void)_setLocalVersion:(int)a0;
+ (id)defaultExceptionHandler;

- (void)finalize;
- (id)host;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (id)processInfo;
- (int)processIdentifier;
- (id)init;
- (void)dealloc;
- (void)_createAndHandleUncaughtSystemExceptionWithSignal:(int)a0 pc:(void *)a1 sp:(void *)a2;
- (void)_handleException:(id)a0 mask:(unsigned long long)a1;
- (unsigned long long)exceptionHandlingMask;
- (unsigned long long)exceptionHangingMask;
- (id)exceptionLoggingConnectionName;
- (void)setExceptionHandlingMask:(unsigned long long)a0;
- (void)setExceptionHangingMask:(unsigned long long)a0;
- (void)setExceptionLoggingConnectionName:(id)a0;

@end
