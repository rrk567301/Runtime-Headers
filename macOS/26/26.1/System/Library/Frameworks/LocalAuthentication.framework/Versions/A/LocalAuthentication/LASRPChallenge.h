@class NSData;

@interface LASRPChallenge : NSObject {
    void /* function */ salt;
    void /* function */ publicKeyB;
}

@property (nonatomic, readonly) NSData *salt;
@property (nonatomic, readonly) NSData *publicKeyB;

+ (id)makeChallengeWithSalt:(id)a0 publicKeyB:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSalt:(id)a0 publicKeyB:(id)a1;

@end
