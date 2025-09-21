@class NSString;

@interface SRDTranscriptionToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *tokenName;
@property (nonatomic) double start;
@property (nonatomic) double end;
@property (nonatomic) double silenceStart;
@property (nonatomic) double confidence;
@property (nonatomic) BOOL hasSpaceAfter;
@property (nonatomic) BOOL hasSpaceBefore;
@property (retain, nonatomic) NSString *phoneSequence;
@property (retain, nonatomic) NSString *ipaPhoneSequence;
@property (nonatomic) BOOL appendedAutoPunctuation;
@property (nonatomic) BOOL prependedAutoPunctuation;
@property (nonatomic) BOOL isModifiedByAutoPunctuation;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTokenName:(id)a0 start:(double)a1 end:(double)a2 silenceStart:(double)a3 confidence:(double)a4 hasSpaceAfter:(BOOL)a5 hasSpaceBefore:(BOOL)a6 phoneSequence:(id)a7 ipaPhoneSequence:(id)a8;

@end
