@protocol MTLDevice;

@interface MPSParavirtDevice : NSObject {
    id<MTLDevice> _device;
    SEL _hostSupportsFamilySEL;
    void /* function */ *_hostSupportsFamily;
}

- (BOOL)supportsFamily:(long long)a0;
- (id)initWithDevice:(id)a0;

@end
