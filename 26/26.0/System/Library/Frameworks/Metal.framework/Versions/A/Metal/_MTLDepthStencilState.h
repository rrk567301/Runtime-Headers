@class NSString;
@protocol MTLDevice;

@interface _MTLDepthStencilState : NSObject <MTLDepthStencilStateSPI>

@property (readonly) id<MTLDevice> device;
@property (readonly) NSString *label;
@property (readonly) BOOL readsDepth;
@property (readonly) BOOL writesDepth;
@property (readonly) BOOL readsStencil;
@property (readonly) BOOL writesStencil;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
