@class ISDataProvider, NSArray, NSString, NSDictionary, NSURLResponse, NSURLRequest, NSCountedSet, ISURLRequest, NSMutableData, NSURLConnection;
@protocol ISURLOperationDelegate, ISOperationDelegate;

@interface ISURLOperation : ISOperation <NSURLConnectionDelegate> {
    NSURLRequest *_activeURLRequest;
    NSURLConnection *_connection;
    NSMutableData *_dataBuffer;
    long long _networkRetryCount;
    long long _contentRetryCount;
    NSCountedSet *_redirectURLs;
    unsigned long long _countedBytes;
}

@property (retain) NSURLResponse *response;
@property (getter=_shouldSetCookies, setter=_setShouldSetCookies:) BOOL _shouldSetCookies;
@property (weak) id<ISURLOperationDelegate, ISOperationDelegate> delegate;
@property (retain) ISDataProvider *dataProvider;
@property (copy) ISURLRequest *request;
@property BOOL checkForIncompleteFinish;
@property BOOL cancelIfNotAlreadyOnDisk;
@property BOOL requireExtendedValidationCertificate;
@property (copy) NSArray *anchorCertificates;
@property BOOL anchorRevocationCheck;
@property (readonly) BOOL fileWasAlreadyOnDisk;
@property BOOL shouldRetryOnNetworkError;
@property (copy) NSDictionary *conditionalConnectionProperties;
@property (copy) id /* block */ outputHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)operationType;

- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (BOOL)_runWithURL:(id)a0;
- (void)connection:(id)a0 conditionalRequirementsChanged:(BOOL)a1;
- (void)_setActiveURLRequest:(id)a0;
- (id)connection:(id)a0 willSendRequestForEstablishedConnection:(id)a1 properties:(id)a2;
- (void)_retry;
- (void)_sendResponseToDelegate:(id)a0;
- (void)_sendOutputToDelegate:(id)a0;
- (void)_run;
- (void)_handleReceivedData:(id)a0;
- (void)_logResponseBody:(id)a0;
- (id)_copyQueryStringDictionaryForRedirect:(id)a0;
- (id)newRequestWithURL:(id)a0;
- (id)_activeURL;
- (void)_handleFinishedLoading;
- (void)_stopConnection;
- (id)_handleRedirectRequest:(id)a0 response:(id)a1;
- (void)_handleReceivedResponse:(id)a0;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (id)_copyAcceptLanguageString;
- (BOOL)shouldFollowRedirectWithRequest:(id)a0 returningError:(id *)a1;
- (void)_logHeadersForRequest:(id)a0;
- (id)_request;
- (BOOL)handleRedirectFromDataProvider:(id)a0;
- (void)_sendRequestToDelegate:(id)a0;
- (id)_urlConnectionWithRequest:(id)a0;
- (void)_logRequest:(id)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)handleResponse:(id)a0;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)run;
- (void)_updateProgress;
- (id)init;
- (void)connectionDidFinishLoading:(id)a0;
- (void).cxx_destruct;

@end
