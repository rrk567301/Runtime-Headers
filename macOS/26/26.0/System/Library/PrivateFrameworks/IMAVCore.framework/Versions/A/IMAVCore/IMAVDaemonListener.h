@class NSMutableArray;

@interface IMAVDaemonListener : NSObject {
    NSMutableArray *_handlers;
    BOOL _postedSetupComplete;
}

@property (readonly, nonatomic) BOOL isSetupComplete;

- (void)_noteDisconnected;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (void)addHandler:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)removeHandler:(id)a0;
- (void).cxx_destruct;
- (void)setupComplete:(BOOL)a0 info:(id)a1;

@end
