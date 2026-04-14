@class NSData;

@interface LANTLMVerificationResult : NSObject {
    void /* function */ sessionKey;
}

@property (nonatomic, readonly) NSData *sessionKey;

+ (id)makeVerificationResultWithSessionKey:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSessionKey:(id)a0;

@end
