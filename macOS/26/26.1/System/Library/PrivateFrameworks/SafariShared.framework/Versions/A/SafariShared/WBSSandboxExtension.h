@class NSURL;

@interface WBSSandboxExtension : NSObject {
    unsigned long long _counter;
}

@property (readonly, nonatomic) NSURL *url;

- (id)initWithURL:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)releaseResource;
- (BOOL)consumeResource;
- (BOOL)startAccessingResource;
- (void)stopAccessingResource;

@end
