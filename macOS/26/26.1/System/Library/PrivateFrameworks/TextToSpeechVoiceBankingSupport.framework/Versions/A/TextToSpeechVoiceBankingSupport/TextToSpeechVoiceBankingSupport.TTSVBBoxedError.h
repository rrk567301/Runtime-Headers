@class NSString;

@interface TextToSpeechVoiceBankingSupport.TTSVBBoxedError : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ ttsvbError;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
