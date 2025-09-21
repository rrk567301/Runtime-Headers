@class NSString, NSNumber;

@interface AFSpeechToken : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *phoneSequence;
@property (copy, nonatomic) NSString *ipaPhoneSequence;
@property (nonatomic) long long confidenceScore;
@property (nonatomic) double startTime;
@property (nonatomic) double silenceStartTime;
@property (nonatomic) double endTime;
@property (nonatomic) char removeSpaceBefore;
@property (nonatomic) char removeSpaceAfter;
@property (copy, nonatomic) NSNumber *graphCost;
@property (copy, nonatomic) NSNumber *acousticCost;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)aceToken;

@end
