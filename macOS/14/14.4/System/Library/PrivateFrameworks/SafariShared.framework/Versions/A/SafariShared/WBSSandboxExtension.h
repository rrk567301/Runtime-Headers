@class NSURL;

@interface WBSSandboxExtension : NSObject {
    unsigned long long _counter;
}

@property (readonly, nonatomic) NSURL *url;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)releaseResource;
- (BOOL)consumeResource;
- (BOOL)startAccessingResource;
- (void)stopAccessingResource;

@end
