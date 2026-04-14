@class NSString, SiriTTSSynthesisVoice;

@interface SiriTTSVoiceSubscription : NSObject <NSSecureCoding> {
    void /* function */ clientId;
    void /* function */ accessoryId;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, retain) SiriTTSSynthesisVoice *voice;
@property (nonatomic, copy) NSString *clientId;
@property (nonatomic, copy) NSString *accessoryId;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithVoice:(id)a0 clientId:(id)a1 accessoryId:(id)a2;

@end
