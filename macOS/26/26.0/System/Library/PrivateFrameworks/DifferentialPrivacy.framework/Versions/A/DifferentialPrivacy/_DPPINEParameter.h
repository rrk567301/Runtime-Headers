@interface _DPPINEParameter : NSObject

@property (nonatomic, readonly) long long fractionalBitCount;
@property (nonatomic, readonly) float l2NormBound;
@property (nonatomic, readonly) long long numOfProofs;
@property (nonatomic, readonly) long long wraparoundCheckCount;
@property (nonatomic, readonly) unsigned int pineType;

- (id)init;
- (id)initWithFractionalBitCount:(long long)a0 l2NormBound:(float)a1 numOfProofs:(long long)a2 wraparoundCheckCount:(long long)a3 pineType:(unsigned int)a4;

@end
