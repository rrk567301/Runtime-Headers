@class NSString;

@interface WebDownloadInternal : NSObject <NSURLDownloadDelegate> {
    struct RetainPtr<id> { void *m_ptr; } realDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)download:(id)a0 decideDestinationWithSuggestedFilename:(id)a1;
- (void)download:(id)a0 didCreateDestination:(id)a1;
- (void)download:(id)a0 didFailWithError:(id)a1;
- (void)download:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (void)download:(id)a0 didReceiveDataOfLength:(unsigned long long)a1;
- (void)download:(id)a0 didReceiveResponse:(id)a1;
- (char)download:(id)a0 shouldDecodeSourceDataOfMIMEType:(id)a1;
- (id)download:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)downloadDidBegin:(id)a0;
- (void)downloadDidFinish:(id)a0;
- (void)setRealDelegate:(id)a0;

@end
