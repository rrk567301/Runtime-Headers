@class MTLFunctionStitchingGraph, NSArray;

@interface MTL4StitchedFunctionDescriptor : MTL4FunctionDescriptor

@property (copy, nonatomic) MTLFunctionStitchingGraph *functionGraph;
@property (copy, nonatomic) NSArray *functionDescriptors;

- (unsigned long long)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
