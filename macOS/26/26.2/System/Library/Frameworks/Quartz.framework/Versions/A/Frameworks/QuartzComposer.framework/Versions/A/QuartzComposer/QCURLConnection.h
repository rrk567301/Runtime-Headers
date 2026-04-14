@class NSURL;

@interface QCURLConnection : NSURLConnection {
    NSURL *_url;
    id _delegate;
}

- (id)url;
- (id)initWithRequest:(id)a0 delegate:(id)a1 startImmediately:(BOOL)a2;
- (void)dealloc;

@end
