@class PLCoreService, PPTCoreStorage, PLCoreStorage, PPTCollectionOperator, NSDate, NSObject, PLCoreAgent;
@protocol OS_os_transaction, OS_dispatch_source;

@interface PowerlogCore : NSObject {
    NSObject<OS_dispatch_source> *_fVMPressureSource;
}

@property (retain) NSObject<OS_os_transaction> *userRequestTransaction;
@property (readonly) NSDate *launchDate;
@property (readonly) PLCoreStorage *storage;
@property (readonly) PLCoreAgent *agents;
@property (readonly) PLCoreService *services;
@property (readonly) PPTCoreStorage *coreStorage;
@property (readonly) PPTCollectionOperator *collection;

+ (BOOL)isAudioAccessory;
+ (BOOL)isDebugEnabled;
+ (id)sharedCore;
+ (BOOL)shouldSetupCore;
+ (BOOL)allowRun;
+ (void)deprecateOldFullMode;
+ (BOOL)sharedCoreStarted;
+ (void)setupCore;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)didRecieveMemoryPressureWarning;
- (void)startCore;
- (void)stopCore;
- (void)startCoreForTest;

@end
