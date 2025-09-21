@class NSString;
@protocol MTLDevice;

@interface MTLToolsDepthStencilState : MTLToolsObject <MTLDepthStencilStateSPI>

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
- (id)initWithDepthStencilState:(id)a0 descriptor:(id)a1 device:(id)a2;

@end
