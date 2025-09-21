@class NSString;

@interface TextToSpeechVoiceBankingSupport.TTSVBBoxedError : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ ttsvbError;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
