@class NSURL;

@interface QCURLConnection : NSURLConnection {
    NSURL *_url;
    id _delegate;
}

- (void)dealloc;
- (id)initWithRequest:(id)a0 delegate:(id)a1 startImmediately:(BOOL)a2;
- (id)url;

@end
