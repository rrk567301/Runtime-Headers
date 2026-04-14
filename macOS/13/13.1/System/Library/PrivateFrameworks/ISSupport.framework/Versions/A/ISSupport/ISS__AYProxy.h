@class ISS_AYOperation;

@interface ISS__AYProxy : NSProxy {
    ISS_AYOperation *_operation;
    BOOL _asyncLaunch;
}

- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)description;
- (id)initWithOperation:(id)a0;
- (void)setAsyncLaunch:(BOOL)a0;

@end
