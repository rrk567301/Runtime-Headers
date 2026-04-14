@class CLSilo;
@protocol CLIntersiloProxyDelegateProtocol;

@interface CLIntersiloProxy : NSProxy

@property (readonly, weak, nonatomic) id<CLIntersiloProxyDelegateProtocol> delegate;
@property (readonly, weak, nonatomic) CLSilo *delegateSilo;

+ (Class)initiatorRepresentingClass;
+ (Class)recipientRepresentingClass;
+ (id)proxyForRecipientObject:(id)a0 inSilo:(id)a1 recipientName:(id)a2;

- (id)description;
- (id)init;
- (id)peer;
- (id)initWithDelegateObject:(id)a0 delegateSilo:(id)a1;
- (void).cxx_destruct;
- (void)registerDelegate:(id)a0 inSilo:(id)a1;
- (BOOL)offsiloHandleInvocation:(id)a0 selectorInfo:(id)a1 peer:(id)a2;
- (void)setDelegateEntityName:(const char *)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;

@end
