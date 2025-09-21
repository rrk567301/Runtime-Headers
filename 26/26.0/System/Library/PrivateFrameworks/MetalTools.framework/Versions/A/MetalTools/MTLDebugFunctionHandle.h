@class NSString;
@protocol MTLDevice;

@interface MTLDebugFunctionHandle : MTLToolsFunctionHandle <MTLFunctionHandleSPI>

@property (readonly) unsigned long long stage;
@property (readonly) unsigned long long resourceIndex;
@property (readonly) unsigned long long functionType;
@property (readonly) NSString *name;
@property (readonly) id<MTLDevice> device;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseObject:(id)a0 parent:(id)a1 binaryFunction:(id)a2 stage:(unsigned long long)a3;
- (id)initWithBaseObject:(id)a0 parent:(id)a1 function:(id)a2 stage:(unsigned long long)a3;
- (id)initWithBaseObject:(id)a0 parent:(id)a1 stage:(unsigned long long)a2;

@end
