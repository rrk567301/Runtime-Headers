@class MTLFunctionStitchingGraph, NSArray;

@interface MTL4StitchedFunctionDescriptor : MTL4FunctionDescriptor

@property (copy, nonatomic) MTLFunctionStitchingGraph *functionGraph;
@property (copy, nonatomic) NSArray *functionDescriptors;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)dealloc;

@end
