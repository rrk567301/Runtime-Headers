@class NSString, SRDMachTime;

@interface SRDTranscriptionToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *tokenName;
@property (retain, nonatomic) SRDMachTime *start;
@property (retain, nonatomic) SRDMachTime *end;
@property (retain, nonatomic) SRDMachTime *silenceStart;
@property (nonatomic) double confidence;
@property (nonatomic) BOOL hasSpaceAfter;
@property (nonatomic) BOOL hasSpaceBefore;
@property (retain, nonatomic) NSString *phoneSequence;
@property (retain, nonatomic) NSString *ipaPhoneSequence;
@property (nonatomic) BOOL appendedAutoPunctuation;
@property (nonatomic) BOOL prependedAutoPunctuation;
@property (nonatomic) BOOL isModifiedByAutoPunctuation;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTokenName:(id)a0 start:(id)a1 end:(id)a2 silenceStart:(id)a3 confidence:(double)a4 hasSpaceAfter:(BOOL)a5 hasSpaceBefore:(BOOL)a6 phoneSequence:(id)a7 ipaPhoneSequence:(id)a8;

@end
