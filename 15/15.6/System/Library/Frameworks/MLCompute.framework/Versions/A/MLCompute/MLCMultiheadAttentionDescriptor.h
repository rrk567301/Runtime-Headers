@interface MLCMultiheadAttentionDescriptor : NSObject <NSCopying>

@property (nonatomic) char hasKeyPaddingMask;
@property (nonatomic) char hasAttentionMask;
@property (readonly, nonatomic) unsigned long long modelDimension;
@property (readonly, nonatomic) unsigned long long keyDimension;
@property (readonly, nonatomic) unsigned long long valueDimension;
@property (readonly, nonatomic) unsigned long long headCount;
@property (readonly, nonatomic) float dropout;
@property (readonly, nonatomic) char hasBiases;
@property (readonly, nonatomic) char hasAttentionBiases;
@property (readonly, nonatomic) char addsZeroAttention;

+ (id)descriptorWithModelDimension:(unsigned long long)a0 headCount:(unsigned long long)a1;
+ (id)descriptorWithModelDimension:(unsigned long long)a0 keyDimension:(unsigned long long)a1 valueDimension:(unsigned long long)a2 headCount:(unsigned long long)a3 dropout:(float)a4 hasBiases:(char)a5 hasAttentionBiases:(char)a6 addsZeroAttention:(char)a7;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithModelDimension:(unsigned long long)a0 keyDimension:(unsigned long long)a1 valueDimension:(unsigned long long)a2 headCount:(unsigned long long)a3 dropout:(float)a4 hasBias:(char)a5 hasAttentionBias:(char)a6 addsZeroAttention:(char)a7;

@end
