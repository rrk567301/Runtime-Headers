@class MTLFunctionStitchingGraph, NSArray;

@interface MTL4StitchedFunctionDescriptor : MTL4FunctionDescriptor

@property (copy, nonatomic) MTLFunctionStitchingGraph *functionGraph;
@property (copy, nonatomic) NSArray *functionDescriptors;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
