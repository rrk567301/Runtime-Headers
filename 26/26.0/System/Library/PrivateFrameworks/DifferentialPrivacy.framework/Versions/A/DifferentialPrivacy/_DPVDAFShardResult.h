@class NSData, NSArray;

@interface _DPVDAFShardResult : NSObject {
    void /* function */ publicShare;
    void /* function */ inputShares;
    void /* function */ nonce;
}

@property (nonatomic, readonly) NSData *publicShare;
@property (nonatomic, readonly) NSArray *inputShares;
@property (nonatomic, readonly) NSData *nonce;
@property (nonatomic, readonly) long long dimension;
@property (nonatomic, readonly) long long chunkLength;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPublicShare:(id)a0 inputShares:(id)a1 nonce:(id)a2 dimension:(long long)a3 chunkLength:(long long)a4;

@end
