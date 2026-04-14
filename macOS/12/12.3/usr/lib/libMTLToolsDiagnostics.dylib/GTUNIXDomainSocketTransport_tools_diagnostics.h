@class NSURL;

@interface GTUNIXDomainSocketTransport_tools_diagnostics : GTBaseSocketTransport_tools_diagnostics {
    int _mode;
    struct dispatch_source_s { } *_connSource;
}

@property (retain, nonatomic) NSURL *url;

- (void)setUrl:(id)a0;
- (void)_invalidate;
- (id)connect;
- (id)initWithMode:(int)a0;
- (void)_connectServer:(id)a0 future:(id)a1;
- (void)_connectClient:(id)a0 future:(id)a1;

@end
