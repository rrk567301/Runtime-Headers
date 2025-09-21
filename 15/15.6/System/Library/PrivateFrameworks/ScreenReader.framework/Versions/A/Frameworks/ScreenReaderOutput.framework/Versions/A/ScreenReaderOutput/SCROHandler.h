@class NSLock;

@interface SCROHandler : NSObject <SCROHandlerProtocol> {
    NSLock *_lock;
    char isInvalid;
}

@property (weak, nonatomic) id callbackDelegate;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)lock;
- (void)unlock;
- (int)handleGetValue:(id *)a0 forKey:(int)a1 trusted:(char)a2;
- (int)handleGetValue:(id *)a0 forKey:(int)a1 withObject:(id)a2 trusted:(char)a3;
- (int)handlePerformActionForKey:(int)a0 trusted:(char)a1;
- (int)handleRegisterCallbackForKey:(int)a0 trusted:(char)a1;
- (int)handleSetValue:(id)a0 forKey:(int)a1 trusted:(char)a2;

@end
