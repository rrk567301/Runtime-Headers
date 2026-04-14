@interface LUITestCommandsObserver : NSObject

@property (retain) id observer;
@property (copy) id /* block */ handler;

- (void).cxx_destruct;
- (void)dealloc;

@end
