@class NSError, NSString, NSURL, NSURLResponse, ICSDocument, NSURLProtectionSpace, NSMutableData, NSURLConnection;

@interface CalSubscriptionOperation : NSObject <NSURLConnectionDelegate> {
    NSURL *_subscriptionURL;
    NSURL *_displayURL;
    NSURLProtectionSpace *_protectionSpace;
    NSURLResponse *_response;
    NSMutableData *_buffer;
    ICSDocument *_document;
    BOOL _inProgress;
    id _delegate;
    NSURLConnection *_connection;
    BOOL _noChanges;
}

@property (retain) NSError *error;
@property BOOL isSynchronous;
@property BOOL calendarIsEventContainer;
@property BOOL calendarIsTaskContainer;
@property BOOL useShortTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canHandleURL:(id)a0;
+ (id)scrubSchemeOnSubscriptionURL:(id)a0;

- (id)delegate;
- (id)initWithURL:(id)a0;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)calendar;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (id)response;
- (void)setDocument:(id)a0;
- (id)protectionSpace;
- (BOOL)download;
- (id)subscriptionURL;
- (void)downloadAsynchronously;
- (long long)operationProgress;
- (long long)operationTotal;
- (void)abortOperation;
- (id)backingCalDAVCalendarInContext:(id)a0;
- (void)addHTTPHeadersToRequest:(id)a0 skipAcceptHeader:(BOOL)a1;
- (void)determineContainerTypeForCalendar:(id)a0;
- (id)generateAuthenticationError;
- (id)_createCalendarHelper:(id)a0 withAccount:(id)a1 context:(id)a2;
- (id)displayURL;
- (BOOL)downloadSynchronously;
- (void)postProcess;
- (id)calendarID;
- (id)createLocalSubscriptionCalendarInContext:(id)a0;
- (id)createCalDAVSubscriptionCalendarForAccount:(id)a0 inContext:(id)a1;
- (void)update:(id)a0;
- (void)_retryRequestWithoutAcceptHeader:(BOOL)a0;

@end
