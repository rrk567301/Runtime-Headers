@class NSString, ULFuture;

@interface ULPromise : NSObject <ULCancelable>

@property (readonly) ULFuture *future;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)promise;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;

@end
