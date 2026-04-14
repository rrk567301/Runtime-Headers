@class NSMutableArray;

@interface IMAVDaemonListener : NSObject {
    NSMutableArray *_handlers;
    BOOL _postedSetupComplete;
}

@property (readonly, nonatomic) BOOL isSetupComplete;

- (id)methodSignatureForSelector:(SEL)a0;
- (void)addHandler:(id)a0;
- (void).cxx_destruct;
- (void)removeHandler:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)_noteDisconnected;
- (id)init;
- (void)setupComplete:(BOOL)a0 info:(id)a1;

@end
