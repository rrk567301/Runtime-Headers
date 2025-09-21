@class NSString;

@interface SIRINLUAsrTokenInformation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *postITNText;
@property (retain, nonatomic) NSString *phoneSequence;
@property (retain, nonatomic) NSString *ipaPhoneSequence;
@property (nonatomic) char addSpaceAfter;
@property (nonatomic) char removeSpaceAfter;
@property (nonatomic) char removeSpaceBefore;
@property (nonatomic) double confidenceScore;
@property (nonatomic) unsigned int beginIndex;
@property (nonatomic) unsigned int endIndex;
@property (nonatomic) int startMilliSeconds;
@property (nonatomic) int endMilliSeconds;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPostITNText:(id)a0 phoneSequence:(id)a1 ipaPhoneSequence:(id)a2 addSpaceAfter:(char)a3 removeSpaceAfter:(char)a4 removeSpaceBefore:(char)a5 confidenceScore:(double)a6 beginIndex:(unsigned int)a7 endIndex:(unsigned int)a8;
- (id)initWithPostITNText:(id)a0 phoneSequence:(id)a1 ipaPhoneSequence:(id)a2 addSpaceAfter:(char)a3 removeSpaceAfter:(char)a4 removeSpaceBefore:(char)a5 confidenceScore:(double)a6 beginIndex:(unsigned int)a7 endIndex:(unsigned int)a8 startMilliSeconds:(int)a9 endMilliSeconds:(int)a10;

@end
