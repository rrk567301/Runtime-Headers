@interface ISDisplayLink : NSObject {
    struct __CVDisplayLink { } *_displayLinkRef;
}

@property (copy, nonatomic) id /* block */ updateHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) long long preferredFramesPerSecond;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)initWithUpdateHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)_callUpdateHandler;

@end
