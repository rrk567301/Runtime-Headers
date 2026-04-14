@class NSData;

@interface LANTLMVerificationResult : NSObject {
    void /* function */ sessionKey;
}

@property (nonatomic, readonly) NSData *sessionKey;

+ (id)makeVerificationResultWithSessionKey:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSessionKey:(id)a0;

@end
