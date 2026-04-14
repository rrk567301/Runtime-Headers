@protocol MTLDevice;

@interface VFXREREnderer : NSObject {
    void /* unknown type, empty encoding */ commandQueue;
}

@property (nonatomic, retain) id<MTLDevice> device;

- (id)init;
- (void).cxx_destruct;

@end
