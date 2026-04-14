@class NSData;

@interface LANTLMChallenge : NSObject {
    void /* function */ data;
}

@property (nonatomic, readonly) NSData *data;

+ (id)makeChallengeWithData:(id)a0;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
