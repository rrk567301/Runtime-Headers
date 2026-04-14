@class NSArray, NSString, NSLocale, SRDMachTime;

@interface SRDTranscriptionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSArray *tokenSausage;
@property (retain, nonatomic) NSArray *nBestResults;
@property (retain, nonatomic) NSString *firstBestResult;
@property (retain, nonatomic) NSArray *preITN_tokenSausage;
@property (retain, nonatomic) NSArray *preITN_nBestResults;
@property (retain, nonatomic) NSString *preITN_firstBestResult;
@property (nonatomic) BOOL isPartialResult;
@property (nonatomic) unsigned long long utteranceID;
@property (retain, nonatomic) SRDMachTime *timeAsrResultReceived;
@property (retain, nonatomic) SRDMachTime *timeUtteranceStart;
@property (retain, nonatomic) SRDMachTime *timeUtteranceEnd;
@property (retain, nonatomic) SRDMachTime *timeMatchedUtteranceSilenceStart;
@property (retain, nonatomic) SRDMachTime *timeSRDResponseSent;
@property (retain, nonatomic) SRDMachTime *timeCommandExecutionStarted;
@property (retain, nonatomic) SRDMachTime *timeCommandExecutionEnded;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)combineTokens:(id)a0 isLocaleWithNoSpaceSeparator:(BOOL)a1;
- (void)updateMatchedUtteranceSilenceStart:(id)a0 isLocaleWithNoSpaceSeparator:(BOOL)a1;

@end
