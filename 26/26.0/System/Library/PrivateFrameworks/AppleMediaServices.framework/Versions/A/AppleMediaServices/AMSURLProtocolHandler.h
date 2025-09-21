@class NSString, AMSURLMetricsLoadURLHandler, AMSFairPlayDeviceIdentity, AMSURLSession;

@interface AMSURLProtocolHandler : NSObject <AMSURLHandling> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertiesLock;
}

@property (readonly, nonatomic) AMSURLMetricsLoadURLHandler *metricsHandler;
@property (readonly, nonatomic) AMSFairPlayDeviceIdentity *fairPlayDeviceIdentity;
@property (readonly, nonatomic) id /* block */ fraudReportRefreshScoreBlock;
@property (readonly, nonatomic) id /* block */ fraudReportStateStorageFactoryBlock;
@property (weak) AMSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reversePushSamplingPercentageForTask:(id)a0;

- (id)decodeMutableData:(id)a0 task:(id)a1 error:(id *)a2;
- (id)decodeData:(id)a0 task:(id)a1 error:(id *)a2;
- (void)reportMetricsForContext:(id)a0;
- (id)initWithFraudReportRefreshScoreBlock:(id /* block */)a0 fraudReportStateStorageFactoryBlock:(id /* block */)a1;
- (void)handleCompletionWithTask:(id)a0 metrics:(id)a1 decodedObject:(id)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (id)_handleResponse:(id)a0 task:(id)a1;
- (id)_setResponseCookiesFromResponse:(id)a0 taskInfo:(id)a1;
- (void)_pingURL:(id)a0 session:(id)a1 account:(id)a2 bag:(id)a3;
- (id)initWithMetricsHandler:(id)a0 fairPlayDeviceIdentity:(id)a1 fraudReportRefreshScoreBlock:(id /* block */)a2 fraudReportStateStorageFactoryBlock:(id /* block */)a3;
- (id)initWithMetricsHandler:(id)a0 fairPlayDeviceIdentity:(id)a1;
- (id)shouldEnableReversePushForTask:(id)a0;
- (void)decodeMutableData:(id)a0 task:(id)a1 completionHandler:(id /* block */)a2;
- (void)reconfigureNewRequest:(id)a0 originalTask:(id)a1 redirect:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)handleResponse:(id)a0 task:(id)a1 completionHandler:(id /* block */)a2;
- (void)didCreateTask:(id)a0 fromRequest:(id)a1 error:(id *)a2;
- (void)reconfigureNewRequest:(id)a0 originalTask:(id)a1 redirect:(BOOL)a2 error:(id *)a3;
- (id)_URLIsTrustedFromRequest:(id)a0 bag:(id)a1;
- (void).cxx_destruct;
- (void)didCreateTask:(id)a0 fromRequest:(id)a1 completionHandler:(id /* block */)a2;

@end
