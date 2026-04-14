@class NSString;

@interface LACBackgroundTaskQueued : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ worker;
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;
- (void)runWithTimeout:(double)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)initWithIdentifier:(id)a0 worker:(id /* block */)a1;

@end
