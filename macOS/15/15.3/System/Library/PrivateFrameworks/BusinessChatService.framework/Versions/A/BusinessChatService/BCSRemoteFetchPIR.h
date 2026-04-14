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

- (void).cxx_destruct;
- (id)decompressData:(id)a0;
- (id)errorForPIRError:(id)a0;
- (void)fetchDataMatching:(id)a0 timeout:(long long)a1 completion:(id /* block */)a2;
- (void)fetchDataMatchingBatch:(id)a0 timeout:(long long)a1 perItemBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (id)initWithEnvironment:(id)a0 metricFactory:(id)a1;
- (id)initWithEnvironment:(id)a0 metricFactory:(id)a1 queue:(id)a2;

@end
