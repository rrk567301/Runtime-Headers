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

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)dealloc;
- (id)initWithFunctionDescriptor:(id)a0;

@end
