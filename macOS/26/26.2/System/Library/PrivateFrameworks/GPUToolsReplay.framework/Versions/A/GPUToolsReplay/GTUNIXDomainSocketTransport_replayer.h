@class NSURL, NSObject;
@protocol OS_dispatch_source;

@interface GTUNIXDomainSocketTransport_replayer : GTBaseSocketTransport_replayer {
    int _mode;
    NSObject<OS_dispatch_source> *_connSource;
}

@property (retain, nonatomic) NSURL *url;

- (id)connect;
- (id)initWithMode:(int)a0;
- (void)setUrl:(id)a0;
- (void)_invalidate;
- (void)_connectClient:(id)a0 future:(id)a1;
- (void)_connectServer:(id)a0 future:(id)a1;

@end
