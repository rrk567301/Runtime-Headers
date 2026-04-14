@class CSExclaveRecordClient, NSObject;
@protocol OS_dispatch_queue;

@interface CSExclaveAssetManagerProxy : NSObject

@property (retain, nonatomic) CSExclaveRecordClient *exclaveRecordClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)startSecureMobileAssetLoaderService:(BOOL)a0 completion:(id /* block */)a1;
- (void)stopSecureMobileAssetLoaderService:(id /* block */)a0;

@end
