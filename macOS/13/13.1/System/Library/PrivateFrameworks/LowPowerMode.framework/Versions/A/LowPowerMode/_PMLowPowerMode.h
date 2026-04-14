@class NSXPCConnection;

@interface _PMLowPowerMode : NSObject <_PMLowPowerModeProtocol> {
    NSXPCConnection *_connection;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)setPowerMode:(long long)a0 fromSource:(id)a1;
- (void)setPowerMode:(long long)a0 fromSource:(id)a1 withParams:(id)a2 withCompletion:(id /* block */)a3;
- (void)setPowerMode:(long long)a0 fromSource:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)setPowerMode:(long long)a0 fromSource:(id)a1 withParams:(id)a2;
- (long long)getPowerMode;

@end
