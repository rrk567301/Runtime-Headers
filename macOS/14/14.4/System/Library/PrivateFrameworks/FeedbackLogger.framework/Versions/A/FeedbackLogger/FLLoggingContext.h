@class NSUserDefaults, NSString, NSFileManager, FLAutoBugCapture, FLContainerStorePathManager, NSObject;
@protocol OS_dispatch_queue;

@interface FLLoggingContext : NSObject <FLLoggingContext>

@property (copy, nonatomic) NSString *timestampReferenceIdentifier;
@property (retain, nonatomic) NSFileManager *fileManager;
@property (retain, nonatomic) FLContainerStorePathManager *containerStorePathManager;
@property (retain, nonatomic) FLAutoBugCapture *autoBugCapture;
@property (readonly, nonatomic) unsigned long long now;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInternalBuild;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFileManager:(id)a0;
- (id)initWithFileManager:(id)a0 userDefaults:(id)a1 autoBugCapture:(id)a2;
- (id)pathForStore:(id)a0 category:(id)a1;
- (void)reportTelemetry:(id)a0 payload:(id)a1;
- (BOOL)shouldPersistInGroupContainer:(id)a0 category:(id)a1;

@end
