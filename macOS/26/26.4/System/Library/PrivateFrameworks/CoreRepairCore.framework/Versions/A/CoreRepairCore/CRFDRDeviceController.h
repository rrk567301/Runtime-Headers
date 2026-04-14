@class CRFDRBaseDeviceHandler;

@interface CRFDRDeviceController : NSObject {
    CRFDRBaseDeviceHandler *handler;
}

+ (id)sharedSingleton;

- (id)_init;
- (void).cxx_destruct;
- (id)init;
- (id)getHandlerForDevice;

@end
