@class NSString;
@protocol MTLDevice;

@interface MTLSimDepthStencilState : _MTLDepthStencilState <MTLDepthStencilStateSPI, MTLSerializerDepthStencilState> {
    unsigned int _reference;
}

@property (readonly) char readsDepth;
@property (readonly) char writesDepth;
@property (readonly) char readsStencil;
@property (readonly) char writesStencil;
@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (unsigned int)depthStencilRef;
- (id)initWithDescriptor:(id)a0 reference:(unsigned int)a1 device:(id)a2;

@end
