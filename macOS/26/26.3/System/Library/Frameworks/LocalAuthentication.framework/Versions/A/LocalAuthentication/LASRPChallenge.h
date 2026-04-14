@class NSData;

@interface LASRPChallenge : NSObject {
    void /* function */ salt;
    void /* function */ publicKeyB;
}

@property (nonatomic, readonly) NSData *salt;
@property (nonatomic, readonly) NSData *publicKeyB;

+ (id)makeChallengeWithSalt:(id)a0 publicKeyB:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSalt:(id)a0 publicKeyB:(id)a1;

@end
