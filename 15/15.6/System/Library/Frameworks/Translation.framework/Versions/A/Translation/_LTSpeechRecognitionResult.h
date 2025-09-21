@class _LTSpeechRecognitionSausage, NSString, NSArray, NSLocale;

@interface _LTSpeechRecognitionResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isFinal) char final;
@property (nonatomic, getter=isStable) char stable;
@property (retain, nonatomic) NSString *modelVersion;
@property (copy, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSArray *transcriptions;
@property (retain, nonatomic) _LTSpeechRecognitionSausage *bestRecognitionAlternatives;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bestTranscription;

@end
