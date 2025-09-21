@class NSURL;

@interface WBSSandboxExtension : NSObject {
    unsigned long long _counter;
}

@property (readonly, nonatomic) NSURL *url;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (char)consumeResource;
- (void)releaseResource;
- (char)startAccessingResource;
- (void)stopAccessingResource;

@end
