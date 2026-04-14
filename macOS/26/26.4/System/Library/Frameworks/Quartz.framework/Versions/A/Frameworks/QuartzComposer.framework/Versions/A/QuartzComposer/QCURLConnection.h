@class NSURL;

@interface QCURLConnection : NSURLConnection {
    NSURL *_url;
    id _delegate;
}

- (id)initWithRequest:(id)a0 delegate:(id)a1 startImmediately:(BOOL)a2;
- (void)dealloc;
- (id)url;

@end
