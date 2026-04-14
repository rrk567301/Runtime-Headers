@class NSString;
@protocol PKProvisioningAnalyticsSessionReportingResponder;

@interface PKProvisioningAnalyticsSessionReporter : NSObject

@property (weak, nonatomic) id<PKProvisioningAnalyticsSessionReportingResponder> responder;
@property (nonatomic) NSString *sessionID;

- (void)reportEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithResponder:(id)a0 sessionID:(id)a1;
- (void)reportError:(id)a0 context:(id)a1;
- (void)reportOtherError:(id)a0 context:(id)a1;
- (void)resetProductTypes;
- (void)setProductType:(id)a0 subtype:(id)a1;
- (void)setSetupProduct:(id)a0;

@end
