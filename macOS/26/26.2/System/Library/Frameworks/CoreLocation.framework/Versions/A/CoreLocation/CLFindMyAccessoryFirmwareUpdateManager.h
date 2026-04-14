@class NSObject;
@protocol OS_dispatch_queue, CLFindMyAccessoryFirmwareUpdateDelegate;

@interface CLFindMyAccessoryFirmwareUpdateManager : NSObject {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> { struct { struct CLConnectionClient *__ptr_; } ; } _connection;
}

@property (weak, nonatomic) id<CLFindMyAccessoryFirmwareUpdateDelegate> delegate;

- (void)handleInterruption;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)handleMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;
- (void)abortFirmwareUpdateForDevice:(id)a0;
- (void)fetchWhetherLocalFirmwareAssetIsInUseForProductGroup:(id)a0 andProductNumber:(id)a1;
- (void)getPersonalizationInfoForDevice:(id)a0;
- (void)updateFirmwareForDevice:(id)a0 withAssetURL:(id)a1;
- (void)useDefaultFirmwareAssetSourceForProductGroup:(id)a0 andProductNumber:(id)a1;
- (void)useLocalFirmwareAssetFromURL:(id)a0 forProductGroup:(id)a1 forProductNumber:(id)a2 withSandboxExtension:(id)a3;

@end
