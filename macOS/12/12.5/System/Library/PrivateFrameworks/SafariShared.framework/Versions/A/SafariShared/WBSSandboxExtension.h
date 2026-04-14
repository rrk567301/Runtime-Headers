@class NSURL;

@interface WBSSandboxExtension : NSObject {
    unsigned long long _counter;
}

@property (readonly, nonatomic) NSURL *url;

- (void)dealloc;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)releaseResource;
- (BOOL)startAccessingResource;
- (void)stopAccessingResource;
- (BOOL)consumeResource;

@end
