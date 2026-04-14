@class NSString, NSArray, MTLFunctionStitchingFunctionNode;

@interface MTLFunctionStitchingGraph : NSObject <NSCopying>

@property (copy, nonatomic) NSString *functionName;
@property (copy, nonatomic) NSArray *nodes;
@property (retain, nonatomic) MTLFunctionStitchingFunctionNode *outputNode;
@property (copy, nonatomic) NSArray *attributes;

- (id)description;
- (id)formattedDescription:(unsigned long long)a0;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithFunctionName:(id)a0 nodes:(id)a1 outputNode:(id)a2 attributes:(id)a3;

@end
