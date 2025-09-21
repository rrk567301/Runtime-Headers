@class NSString, SiriTTSSynthesisVoice;

@interface SiriTTSPhonemeRequest : SiriTTSBaseRequest {
    void /* function */ text;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) SiriTTSSynthesisVoice *voice;
@property (nonatomic) long long phonemeSystem;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 voice:(id)a1 phonemeSystem:(long long)a2;

@end
