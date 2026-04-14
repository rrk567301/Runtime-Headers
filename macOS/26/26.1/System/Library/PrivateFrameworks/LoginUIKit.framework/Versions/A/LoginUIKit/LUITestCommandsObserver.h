@interface LUITestCommandsObserver : NSObject

@property (retain) id observer;
@property (copy) id /* block */ handler;

- (void)dealloc;
- (void).cxx_destruct;

@end
