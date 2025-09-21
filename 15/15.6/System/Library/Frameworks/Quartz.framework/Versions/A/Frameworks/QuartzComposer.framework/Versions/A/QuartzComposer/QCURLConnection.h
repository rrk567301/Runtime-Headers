@class NSURL;

@interface QCURLConnection : NSURLConnection {
    NSURL *_url;
    id _delegate;
}

- (void)dealloc;
- (id)url;
- (id)initWithRequest:(id)a0 delegate:(id)a1 startImmediately:(char)a2;

@end
