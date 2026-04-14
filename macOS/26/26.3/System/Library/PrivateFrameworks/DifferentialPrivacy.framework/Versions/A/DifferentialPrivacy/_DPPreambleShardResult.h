@class NSData, NSArray;

@interface _DPPreambleShardResult : NSObject {
    void /* function */ publicShare;
    void /* function */ inputShares;
    void /* function */ nonce;
}

@property (nonatomic, readonly) NSData *publicShare;
@property (nonatomic, readonly) NSArray *inputShares;
@property (nonatomic, readonly) NSData *nonce;
@property (nonatomic, readonly) long long dimension;
@property (nonatomic, readonly) double cohortSigma;
@property (nonatomic, readonly) double sigmaLocal;
@property (nonatomic, readonly) double scalingFactor;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPublicShare:(id)a0 inputShares:(id)a1 nonce:(id)a2 dimension:(long long)a3 cohortSigma:(double)a4 sigmaLocal:(double)a5 scalingFactor:(double)a6;

@end
