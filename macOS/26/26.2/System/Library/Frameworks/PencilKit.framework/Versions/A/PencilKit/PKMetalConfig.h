@class PKMetalResourceHandler, NSObject;
@protocol OS_dispatch_queue, MTLDevice;

@interface PKMetalConfig : NSObject {
    BOOL _privateResourceHandler;
}

@property (readonly, nonatomic) PKMetalResourceHandler *resourceHandler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *renderQueue;
@property (readonly, nonatomic) id<MTLDevice> device;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithPrivateResourceHandler:(BOOL)a0;

@end
