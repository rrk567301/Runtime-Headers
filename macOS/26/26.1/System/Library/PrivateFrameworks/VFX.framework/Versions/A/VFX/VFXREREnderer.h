@protocol MTLDevice;

@interface VFXREREnderer : NSObject {
    void /* unknown type, empty encoding */ commandQueue;
}

@property (nonatomic, retain) id<MTLDevice> device;

- (void).cxx_destruct;
- (id)init;

@end
