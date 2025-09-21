@class NSString;

@interface _LTSpeechRecognitionTokensAlternative : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long confidence;
@property (nonatomic, getter=isLowConfidence) char lowConfidence;
@property (nonatomic) char hasSpaceAfter;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
