@interface _DPPrio3SumVectorParameter : NSObject

@property (nonatomic, readonly) long long bitWidth;
@property (nonatomic, readonly) long long numOfAggregators;
@property (nonatomic, readonly) long long numberOfProofs;
@property (nonatomic, readonly) unsigned int vdafType;

- (id)init;
- (id)initWithBitWidth:(long long)a0 numOfAggregators:(long long)a1 numOfProofs:(long long)a2 vdafType:(unsigned int)a3;

@end
