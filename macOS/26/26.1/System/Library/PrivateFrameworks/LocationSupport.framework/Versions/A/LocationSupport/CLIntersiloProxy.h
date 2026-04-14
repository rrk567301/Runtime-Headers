@class CLSilo;
@protocol CLIntersiloProxyDelegateProtocol;

@interface CLIntersiloProxy : NSProxy

@property (readonly, weak, nonatomic) id<CLIntersiloProxyDelegateProtocol> delegate;
@property (readonly, weak, nonatomic) CLSilo *delegateSilo;

+ (Class)recipientRepresentingClass;
+ (id)proxyForRecipientObject:(id)a0 inSilo:(id)a1 recipientName:(id)a2;
+ (Class)initiatorRepresentingClass;

- (BOOL)offsiloHandleInvocation:(id)a0 selectorInfo:(id)a1 peer:(id)a2;
- (void)forwardInvocation:(id)a0;
- (void)registerDelegate:(id)a0 inSilo:(id)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)peer;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDelegateObject:(id)a0 delegateSilo:(id)a1;
- (id)init;
- (void)setDelegateEntityName:(const char *)a0;

@end
