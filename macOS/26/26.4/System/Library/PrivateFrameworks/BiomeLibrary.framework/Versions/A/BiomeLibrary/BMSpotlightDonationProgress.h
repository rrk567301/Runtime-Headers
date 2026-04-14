@class NSString, BMSpotlightDonationProgressReport, BMSpotlightDonationProgressReportFailure;

@interface BMSpotlightDonationProgress : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *clientIndexName;
@property (readonly, nonatomic) BMSpotlightDonationProgressReport *donationProgressReport;
@property (readonly, nonatomic) BMSpotlightDonationProgressReportFailure *donationProgressReportFailure;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;
+ (id)validKeyPaths;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)serialize;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)writeTo:(id)a0;
- (id)initWithBundleId:(id)a0 clientIndexName:(id)a1 donationProgressReport:(id)a2 donationProgressReportFailure:(id)a3;

@end
