@class NSString, NSNumber;

@interface AFSpeechToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *phoneSequence;
@property (copy, nonatomic) NSString *ipaPhoneSequence;
@property (nonatomic) long long confidenceScore;
@property (nonatomic) double startTime;
@property (nonatomic) double silenceStartTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL removeSpaceBefore;
@property (nonatomic) BOOL removeSpaceAfter;
@property (copy, nonatomic) NSNumber *graphCost;
@property (copy, nonatomic) NSNumber *acousticCost;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)aceToken;

@end
