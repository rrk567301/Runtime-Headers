@class NSObject;

@interface MSPMapsPushDaemonRemoteXPCProxy : NSObject

@property (weak, nonatomic) NSObject *target;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithObserver:(id)a0;

@end
