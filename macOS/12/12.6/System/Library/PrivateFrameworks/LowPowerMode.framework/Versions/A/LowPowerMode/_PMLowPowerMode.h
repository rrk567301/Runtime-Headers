@class NSXPCConnection;

@interface _PMLowPowerMode : NSObject <_PMLowPowerModeProtocol> {
    NSXPCConnection *_connection;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setPowerMode:(long long)a0 fromSource:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)setPowerMode:(long long)a0 fromSource:(id)a1;
- (long long)getPowerMode;

@end
