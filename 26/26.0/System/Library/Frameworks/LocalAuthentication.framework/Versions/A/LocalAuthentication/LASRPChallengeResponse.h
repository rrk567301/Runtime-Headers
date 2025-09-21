@class NSData;

@interface LASRPChallengeResponse : NSObject {
    void /* function */ m1;
    void /* function */ publicKeyA;
}

@property (nonatomic, readonly) NSData *m1;
@property (nonatomic, readonly) NSData *publicKeyA;

- (id)init;
- (void).cxx_destruct;
- (id)initWithM1:(id)a0 publicKeyA:(id)a1;

@end
