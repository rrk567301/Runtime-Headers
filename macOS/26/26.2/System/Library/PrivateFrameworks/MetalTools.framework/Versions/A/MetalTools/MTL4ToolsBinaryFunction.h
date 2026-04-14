@class MTL4BinaryFunctionReflection, NSArray, NSString, MTLDebugInstrumentationData;

@interface MTL4ToolsBinaryFunction : MTLToolsObject <MTL4BinaryFunctionGGDSPI> {
    NSArray *_relocations;
}

@property (readonly, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property (copy, nonatomic) NSArray *relocations;
@property (readonly) MTL4BinaryFunctionReflection *reflection;
@property (readonly) NSString *name;
@property (readonly) unsigned long long functionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;

@end
