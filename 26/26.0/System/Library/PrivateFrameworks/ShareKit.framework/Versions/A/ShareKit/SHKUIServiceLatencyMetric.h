@class NSNumber, NSString, SHKLatencyMeasurement;

@interface SHKUIServiceLatencyMetric : SHKMetric

@property (retain) NSNumber *launchCount;
@property (retain) NSNumber *sharedItemsCount;
@property (retain) NSString *serviceIdentifier;
@property BOOL isIOSMac;
@property (retain) SHKLatencyMeasurement *beginExtensionRequestMeasurement;
@property (retain) SHKLatencyMeasurement *convertToExtensionItemMeasurement;
@property (retain) SHKLatencyMeasurement *sendOptionsRequestMeasurement;
@property (retain) SHKLatencyMeasurement *remoteViewControllerRequestMeasurement;
@property (retain) SHKLatencyMeasurement *totalLatencyMeasurement;

- (void)report;
- (id)initWithServiceIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldReport;

@end
