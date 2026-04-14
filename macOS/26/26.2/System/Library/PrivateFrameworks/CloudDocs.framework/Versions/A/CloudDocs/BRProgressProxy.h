@class NSURL;
@protocol BRProgressProxyDelegate;

@interface BRProgressProxy : NSProgress {
    NSURL *_url;
    id _globalProgressSubscriber;
}

@property (weak) id<BRProgressProxyDelegate> delegate;

- (void)stop;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)start;
- (void)dealloc;

@end
