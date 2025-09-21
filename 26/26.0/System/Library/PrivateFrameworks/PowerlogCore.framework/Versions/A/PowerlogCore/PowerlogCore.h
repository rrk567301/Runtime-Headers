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

+ (BOOL)isDebugEnabled;
+ (id)sharedCore;
+ (BOOL)allowRun;
+ (void)deprecateOldFullMode;
+ (BOOL)sharedCoreStarted;
+ (void)setupCore;

- (void)dealloc;
- (void)setupForPreUnlockTelemetry;
- (void)startCore;
- (id)init;
- (void)stopCore;
- (void)didRecieveMemoryPressureWarning;
- (void).cxx_destruct;
- (void)startCoreForTest;

@end
