@class NSString, NSArray, MTLFunctionStitchingFunctionNode;

@interface MTLFunctionStitchingGraph : NSObject <NSCopying>

@property (copy, nonatomic) NSString *functionName;
@property (copy, nonatomic) NSArray *nodes;
@property (retain, nonatomic) MTLFunctionStitchingFunctionNode *outputNode;
@property (copy, nonatomic) NSArray *attributes;

- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithFunctionName:(id)a0 nodes:(id)a1 outputNode:(id)a2 attributes:(id)a3;

@end
