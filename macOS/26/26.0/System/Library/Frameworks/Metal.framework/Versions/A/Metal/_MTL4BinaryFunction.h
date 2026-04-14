@class MTL4BinaryFunctionReflection, NSString, NSArray, MTLDebugInstrumentationData;

@interface _MTL4BinaryFunction : _MTLObjectWithLabel <MTL4BinaryFunctionGGDSPI> {
    NSArray *_relocations;
}

@property (readonly) NSString *name;
@property (readonly) MTL4BinaryFunctionReflection *reflection;
@property (readonly) unsigned long long functionType;
@property (readonly, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property (copy, nonatomic) NSArray *relocations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithFunctionDescriptor:(id)a0;

@end
