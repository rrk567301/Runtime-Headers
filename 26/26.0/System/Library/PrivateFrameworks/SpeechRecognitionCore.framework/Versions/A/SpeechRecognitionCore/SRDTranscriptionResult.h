@class NSArray, NSString;

@interface SRDTranscriptionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *tokenSausage;
@property (retain, nonatomic) NSArray *nBestResults;
@property (retain, nonatomic) NSString *firstBestResult;
@property (retain, nonatomic) NSArray *preITN_tokenSausage;
@property (retain, nonatomic) NSArray *preITN_nBestResults;
@property (retain, nonatomic) NSString *preITN_firstBestResult;
@property (nonatomic) BOOL isPartialResult;
@property (nonatomic) unsigned long long utteranceID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
