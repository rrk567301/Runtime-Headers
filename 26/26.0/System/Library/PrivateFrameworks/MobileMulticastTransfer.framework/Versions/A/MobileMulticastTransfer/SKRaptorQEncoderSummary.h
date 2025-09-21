@class NSArray;

@interface SKRaptorQEncoderSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *rqEncodedFileURLs;
@property (retain, nonatomic) NSArray *rqSourceSymbolCounts;
@property (nonatomic) unsigned long long rqBasicParameters;
@property (nonatomic) unsigned int rqExtendedParameters;

+ (id)encoderSummaryFromFile:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
