@class MTLToolsFunction, MTL4ToolsBinaryFunction, NSString;
@protocol MTLDevice;

@interface MTLToolsFunctionHandle : MTLToolsObject <MTLFunctionHandleSPI>

@property (readonly) MTLToolsFunction *function;
@property (readonly) MTL4ToolsBinaryFunction *binaryFunction;
@property (readonly) unsigned long long resourceIndex;
@property (readonly) unsigned long long functionType;
@property (readonly) NSString *name;
@property (readonly) id<MTLDevice> device;
@property (readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithBaseObject:(id)a0 parent:(id)a1 binaryFunction:(id)a2;
- (id)initWithBaseObject:(id)a0 parent:(id)a1 function:(id)a2;

@end
