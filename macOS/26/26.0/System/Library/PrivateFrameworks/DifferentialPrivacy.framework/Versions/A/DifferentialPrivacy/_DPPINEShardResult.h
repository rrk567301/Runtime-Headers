@class NSData, NSArray;

@interface _DPPINEShardResult : NSObject {
    void /* function */ publicShare;
    void /* function */ inputShares;
    void /* function */ nonce;
}

@property (nonatomic, readonly) NSData *publicShare;
@property (nonatomic, readonly) NSArray *inputShares;
@property (nonatomic, readonly) NSData *nonce;
@property (nonatomic, readonly) unsigned int dimension;
@property (nonatomic, readonly) unsigned int chunkLength;
@property (nonatomic, readonly) unsigned int chunkLengthNormEquality;
@property (nonatomic, readonly) unsigned long long l2NormBoundInt;
@property (nonatomic, readonly) long long fractionalBitCount;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPublicShare:(id)a0 inputShares:(id)a1 nonce:(id)a2 dimension:(long long)a3 chunkLength:(long long)a4 chunkLengthNormEquality:(long long)a5 l2NormBoundInt:(unsigned long long)a6 fractionalBitCount:(long long)a7;

@end
