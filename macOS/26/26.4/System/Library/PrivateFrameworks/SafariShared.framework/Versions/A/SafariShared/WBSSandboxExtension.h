@class NSURL;

@interface WBSSandboxExtension : NSObject {
    unsigned long long _counter;
}

@property (readonly, nonatomic) NSURL *url;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)consumeResource;
- (void)releaseResource;
- (BOOL)startAccessingResource;
- (void)stopAccessingResource;

@end
