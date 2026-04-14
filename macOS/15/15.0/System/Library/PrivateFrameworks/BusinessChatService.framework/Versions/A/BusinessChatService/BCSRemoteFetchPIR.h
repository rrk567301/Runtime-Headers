@class NSObject, NSString, CMLKeywordPIRClient;
@protocol BCSMetricFactoryProtocol, OS_dispatch_queue, BCSPIRServerEnvironmentProtocol;

@interface BCSRemoteFetchPIR : NSObject <BCSPIRItemRemoteFetching>

@property (readonly, retain, nonatomic) id<BCSPIRServerEnvironmentProtocol> environment;
@property (retain, nonatomic) id<BCSMetricFactoryProtocol> metricFactory;
@property (retain, nonatomic) CMLKeywordPIRClient *pirClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pirQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
