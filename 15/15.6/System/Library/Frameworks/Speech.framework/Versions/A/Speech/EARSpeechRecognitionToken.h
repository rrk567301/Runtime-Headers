@class NSString;

@interface EARSpeechRecognitionToken : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *tokenName;
@property (readonly, nonatomic) double start;
@property (readonly, nonatomic) double end;
@property (readonly, nonatomic) double silenceStart;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) char hasSpaceAfter;
@property (readonly, nonatomic) char hasSpaceBefore;
@property (readonly, nonatomic) NSString *phoneSequence;
@property (readonly, nonatomic) NSString *ipaPhoneSequence;
@property (readonly, nonatomic) char appendedAutoPunctuation;
@property (readonly, nonatomic) char prependedAutoPunctuation;
@property (readonly, nonatomic) char isModifiedByAutoPunctuation;
@property (readonly, nonatomic) double graphCost;
@property (readonly, nonatomic) double acousticCost;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithToken:(id)a0;

@end
