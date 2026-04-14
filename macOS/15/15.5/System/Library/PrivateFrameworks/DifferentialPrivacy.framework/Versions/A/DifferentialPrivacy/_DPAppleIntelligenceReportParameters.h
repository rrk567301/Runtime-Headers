@class NSString;

@interface _DPAppleIntelligenceReportParameters : NSObject

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) unsigned int dimension;
@property (readonly, nonatomic) unsigned long long taskExpiration;
@property (readonly, nonatomic) unsigned int minBatchSize;
@property (readonly, nonatomic) double targetCentralEpsilon;
@property (readonly, nonatomic) double targetCentralDelta;
@property (readonly, nonatomic) double localEpsilon;
@property (readonly, nonatomic) BOOL privateAccessToken;
@property (readonly, nonatomic) BOOL ohttp;

+ (BOOL)isValidDonation:(id)a0;

- (void).cxx_destruct;
- (id)initWithDonation:(id)a0;

@end
