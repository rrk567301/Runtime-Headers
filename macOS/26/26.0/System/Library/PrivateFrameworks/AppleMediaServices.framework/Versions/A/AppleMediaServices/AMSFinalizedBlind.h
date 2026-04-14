@class NSData, NSString;

@interface AMSFinalizedBlind : NSObject {
    void /* function */ finalizedData;
    void /* function */ privateInput;
    void /* function */ timestamp;
    void /* function */ adamId;
    void /* function */ publicKey;
}

@property (nonatomic, readonly) NSData *finalizedData;
@property (nonatomic, readonly) NSData *privateInput;
@property (nonatomic, readonly) NSString *timestamp;
@property (nonatomic, readonly) NSString *adamId;
@property (nonatomic, readonly) NSData *publicKey;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFinalizedData:(id)a0 privateInput:(id)a1 timestamp:(id)a2 adamId:(id)a3 publicKey:(id)a4;

@end
