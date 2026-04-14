@class NSString;
@protocol MTLDevice;

@interface MTLSimSamplerState : _MTLSamplerState <MTLSamplerStateSPI, MTLSerializerSamplerState> {
    unsigned int _reference;
}

@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDescriptor:(id)a0 reference:(unsigned int)a1 device:(id)a2;
- (unsigned int)samplerRef;

@end
