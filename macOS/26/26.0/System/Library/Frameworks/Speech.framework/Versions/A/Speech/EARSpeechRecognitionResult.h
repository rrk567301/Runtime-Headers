@class NSArray;

@interface EARSpeechRecognitionResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *tokens;
@property (readonly, copy, nonatomic) NSArray *preITNTokens;
@property (readonly, nonatomic) double confidence;
@property (readonly, copy, nonatomic) NSArray *voiceCommandInterpretations;
@property (readonly, copy, nonatomic) NSArray *preITNVoiceCommandInterpretations;
@property (readonly, nonatomic) BOOL needsLeadingSpace;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0 needsLeadingSpace:(BOOL)a1;

@end
