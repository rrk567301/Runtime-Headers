@interface VUIJSNetworkInterface : VUIJSObject <VUIJSNetworkInterface> {
    int _playbackReportToken;
}

@property BOOL suppressServerConfigNotifications;

- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (void)cancelRequest:(id)a0;
- (void)dealloc;
- (void)_setupObservers;
- (id)initWithAppContext:(id)a0;
- (id)_completeRequestResponse:(unsigned long long)a0 activity:(id)a1 networkOperation:(id)a2 networkResponse:(id)a3 jsCallbackUUID:(id)a4 networkError:(id)a5;
- (id)_createURLRequestFromJSOptionsDictionary:(id)a0;
- (id)_createURLRequestFromRequestProperties:(id)a0 request:(id)a1;
- (void)_enqueueNetworkOp:(id)a0 withJSCallbackUUID:(id)a1 withCompletion:(id /* block */)a2;
- (void)_fetchAsyncConfiguration:(BOOL)a0 callbackId:(id)a1 withCompletion:(id /* block */)a2;
- (void)_handleConfigurationResponse:(id)a0 responseDictionary:(id)a1 error:(id)a2;
- (void)_handleNetworkMetricsActivity:(id)a0 error:(id)a1;
- (void)_handleServerConfigChange:(id)a0;
- (void)_makeAsyncMediaApiRequest:(id)a0 callbackId:(id)a1 withCompletion:(id /* block */)a2;
- (void)_makeAsyncRequest:(id)a0 callbackId:(id)a1 withCompletion:(id /* block */)a2;
- (void)_makeAsyncStoreRequest:(id)a0 callbackId:(id)a1 withCompletion:(id /* block */)a2;
- (long long)_requestOptionsFromJSOptions:(id)a0;
- (id)fetchAsyncConfiguration:(BOOL)a0;
- (void)fetchConfiguration:(BOOL)a0 :(id)a1;
- (id)initWithAppStack:(id)a0;
- (id)makeAsyncMediaApiRequest:(id)a0;
- (id)makeAsyncRequest:(id)a0;
- (id)makeAsyncStoreRequest:(id)a0;
- (id)makeMediaApiRequest:(id)a0 :(id)a1;
- (id)makeRequest:(id)a0 :(id)a1;
- (id)makeStoreRequest:(id)a0 :(id)a1;
- (void)upNextItemsReceived:(id)a0 :(id)a1;

@end
