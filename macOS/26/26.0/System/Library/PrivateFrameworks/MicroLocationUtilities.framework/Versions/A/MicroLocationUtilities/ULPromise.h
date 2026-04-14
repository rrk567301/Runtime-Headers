@class NSString, ULFuture;

@interface ULPromise : NSObject <ULCancelable>

@property (readonly) ULFuture *future;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)promise;

- (void)cancel;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;

@end
