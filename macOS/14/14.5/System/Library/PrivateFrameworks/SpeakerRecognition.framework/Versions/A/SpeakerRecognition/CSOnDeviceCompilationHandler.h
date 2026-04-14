@class NSObject;
@protocol OS_dispatch_queue;

@interface CSOnDeviceCompilationHandler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedHandler;

- (void).cxx_destruct;
- (void)compileAndUpdateDeviceCachesWithAsset:(id)a0 assetType:(unsigned long long)a1 endpointId:(id)a2 errOut:(id *)a3;
- (void)compileAndUpdateDeviceCachesWithAsset:(id)a0 assetType:(unsigned long long)a1 deviceId:(id)a2 currentLocale:(id)a3 errOut:(id *)a4;

@end
