@class NSString, SFSpeechRecognitionResult, NSUUID;

@interface _LTStreamingInput : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SFSpeechRecognitionResult *asrResult;
@property (nonatomic) BOOL isStable;
@property (readonly, nonatomic) BOOL isFinal;
@property (readonly, nonatomic) NSString *text;
@property (copy, nonatomic) NSUUID *sourceIdentifier;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithASRResult:(id)a0;
- (id)initWithText:(id)a0 isFinal:(BOOL)a1;

@end
