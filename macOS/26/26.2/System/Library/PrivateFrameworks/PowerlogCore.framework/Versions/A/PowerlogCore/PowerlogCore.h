@class PLCoreService, PPSCoreStorage, PLCoreStorage, PPSCollectionOperator, NSDate, NSObject, PLCoreAgent;
@protocol OS_os_transaction, OS_dispatch_source;

@interface PowerlogCore : NSObject {
    NSObject<OS_dispatch_source> *_fVMPressureSource;
}

@property (retain) NSObject<OS_os_transaction> *userRequestTransaction;
@property (readonly) NSDate *launchDate;
@property (readonly) PLCoreStorage *storage;
@property (readonly) PLCoreAgent *agents;
@property (readonly) PLCoreService *services;
@property (readonly) PPSCoreStorage *coreStorage;
@property (readonly) PPSCollectionOperator *collection;

+ (BOOL)allowRun;
+ (BOOL)sharedCoreStarted;
+ (void)deprecateOldFullMode;
+ (void)setupCore;
+ (id)sharedCore;
+ (BOOL)isDebugEnabled;

- (void)didRecieveMemoryPressureWarning;
- (void)startCore;
- (void).cxx_destruct;
- (void)startCoreForTest;
- (void)stopCore;
- (id)init;
- (void)setupForPreUnlockTelemetry;
- (void)dealloc;

@end
