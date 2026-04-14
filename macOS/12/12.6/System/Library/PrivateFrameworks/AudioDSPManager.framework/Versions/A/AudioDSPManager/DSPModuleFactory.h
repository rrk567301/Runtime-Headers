@class DatabaseController;

@interface DSPModuleFactory : NSObject {
    DatabaseController *_databaseController;
}

+ (Class)dspModuleClassWithModuleType:(id)a0 isSimulated:(BOOL)a1;
+ (Class)databaseUtilClassWithModuleType:(id)a0;

- (void).cxx_destruct;
- (id)initWithDatabaseController:(id)a0;
- (id)simulatedDSPModuleWithType:(id)a0;
- (id)dspModuleWithType:(id)a0 scope:(unsigned long long)a1 ioControllerID:(unsigned long long)a2 ioStreamIndex:(struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; })a3 dspModuleManager:(id)a4;
- (id)dspModuleWithSimulatedDSPModule:(id)a0 scope:(unsigned long long)a1 ioControllerID:(unsigned long long)a2 ioStreamIndex:(struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; })a3 dspModuleManager:(id)a4;

@end
