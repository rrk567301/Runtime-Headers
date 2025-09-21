@class NSData, NSString, NSError, FMServerInteractionController, NSNumber, NSURLRequest, NSURLSessionDataTask, NSHTTPURLResponse, NSURLConnection;

@interface FMCommandBase : NSOperation

@property (weak, nonatomic) FMServerInteractionController *serverInteractionController;
@property (retain, nonatomic) NSURLSessionDataTask *task;
@property (nonatomic) unsigned long long redirectCount;
@property (copy, nonatomic) NSString *originalHostname;
@property (copy, nonatomic) NSString *redirectedHostname;
@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSHTTPURLResponse *response;
@property (retain, nonatomic) NSData *responseData;
@property (retain, nonatomic) NSURLConnection *connection;
@property (nonatomic) char commandTaskComplete;
@property (copy) NSError *error;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSNumber *port;
@property (nonatomic) double timeout;

- (id)init;
- (void).cxx_destruct;
- (id)path;
- (void)start;
- (void)cancel;
- (char)isConcurrent;
- (char)isExecuting;
- (char)isFinished;
- (id)method;
- (void)finishWithError:(id)a0;
- (id)headers;
- (id)body;
- (char)wasSuccessful;
- (void)sendRequest;
- (char)isTransactionCompleteWithError:(id)a0;
- (void)_dataTaskCompletionHandlerWithData:(id)a0 response:(id)a1 error:(id)a2;
- (id)authHeaders;
- (void)generateFakeResponse:(id)a0 data:(id)a1 error:(id)a2;
- (id)valueForResponseHTTPHeader:(id)a0;
- (char)wasRedirected;

@end
