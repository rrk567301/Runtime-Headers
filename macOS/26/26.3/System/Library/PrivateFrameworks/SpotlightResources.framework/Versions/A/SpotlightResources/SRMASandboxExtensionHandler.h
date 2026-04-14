@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SRMASandboxExtensionHandler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) NSString *assetType;

- (void).cxx_destruct;
- (id)initWithAssetType:(id)a0;
- (void)executeBlock:(id /* block */)a0 wait:(BOOL)a1;

@end
