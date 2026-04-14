@class ISS_AYOperation;

@interface ISS__AYProxy : NSProxy {
    ISS_AYOperation *_operation;
    BOOL _asyncLaunch;
}

- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)description;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)initWithOperation:(id)a0;
- (void)setAsyncLaunch:(BOOL)a0;

@end
