@protocol MTLFunctionStitchingNode;

@interface MTLFunctionStitchingEarlyReturnNode : MTLFunctionStitchingFunctionNode

@property (retain, nonatomic) id<MTLFunctionStitchingNode> condition;

- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCondition:(id)a0 controlDependencies:(id)a1;

@end
