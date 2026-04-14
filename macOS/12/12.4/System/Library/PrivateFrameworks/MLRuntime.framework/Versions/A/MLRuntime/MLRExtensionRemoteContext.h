@class NSString, NSObject;
@protocol OS_os_transaction, MLRTaskPerforming, OS_dispatch_queue;

@interface MLRExtensionRemoteContext : NSExtensionContext <MLRExtensionRemoteProtocol> {
    NSObject<OS_dispatch_queue> *_taskExecutionQueue;
    NSObject<OS_dispatch_queue> *_stopQueue;
}

@property (retain, nonatomic) NSObject<OS_os_transaction> *taskTransaction;
@property (retain, nonatomic) NSObject<OS_os_transaction> *stopTransaction;
@property (retain, nonatomic) id<MLRTaskPerforming> plugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void)stop;
- (id)initWithPlugin:(id)a0;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2 plugin:(id)a3;
- (void)performDodMLTask:(id)a0 sandBoxExtensions:(id)a1 completion:(id /* block */)a2;
- (void)performTrialTask:(id)a0 completion:(id /* block */)a1;
- (void)simulateCrash;
- (id)createDodMLServer;
- (id)privatizeAndEncryptInplace:(id)a0 forRecipe:(id)a1 error:(id *)a2;
- (id)writeBinaryDataAndReturnURL:(id)a0 error:(id *)a1;
- (BOOL)loadPluginIfNecessaryWithError:(id *)a0;
- (id)processTaskResult:(id)a0 forTask:(id)a1 duration:(double)a2 error:(id *)a3;
- (void)performSynchronouslyDodMLTask:(id)a0 sandBoxExtensions:(id)a1 completion:(id /* block */)a2;
- (id)createMLRTrialTaskWithTask:(id)a0;
- (void)performSynchronouslyTrialTask:(id)a0 completion:(id /* block */)a1;
- (void)stopSynchronously;

@end
