@class NSData;

@interface LASRPVerificationResult : NSObject {
    void /* function */ m2;
    void /* function */ sessionKey;
}

@property (nonatomic, readonly) NSData *m2;
@property (nonatomic, readonly) NSData *sessionKey;

+ (id)makeVerificationResultWithM2:(id)a0 sessionKey:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithM2:(id)a0 sessionKey:(id)a1;

@end
