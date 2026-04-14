@class Protocol;

@interface CKWeakObjectCallbackProxy : NSObject

@property (weak, nonatomic) id weakObject;
@property (readonly, nonatomic) BOOL hadObject;
@property (readonly, nonatomic) Protocol *callbackProtocol;

- (id)initWithWeakObject:(id)a0 callbackProtocol:(id)a1;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;

@end
