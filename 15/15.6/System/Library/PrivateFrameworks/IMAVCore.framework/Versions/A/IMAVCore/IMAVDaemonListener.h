@class NSMutableArray;

@interface IMAVDaemonListener : NSObject {
    NSMutableArray *_handlers;
    char _postedSetupComplete;
}

@property (readonly, nonatomic) char isSetupComplete;

- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)removeHandler:(id)a0;
- (void)_noteDisconnected;
- (void)addHandler:(id)a0;
- (void)setupComplete:(char)a0 info:(id)a1;

@end
