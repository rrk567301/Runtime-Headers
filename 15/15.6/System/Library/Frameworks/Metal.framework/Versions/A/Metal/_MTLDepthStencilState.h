@class NSString;
@protocol MTLDevice;

@interface _MTLDepthStencilState : NSObject <MTLDepthStencilStateSPI>

@property (readonly) id<MTLDevice> device;
@property (readonly) NSString *label;
@property (readonly) char readsDepth;
@property (readonly) char writesDepth;
@property (readonly) char readsStencil;
@property (readonly) char writesStencil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
