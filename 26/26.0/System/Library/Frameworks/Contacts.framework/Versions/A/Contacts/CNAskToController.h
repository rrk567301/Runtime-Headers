@class CNXPCContactsSupport;

@interface CNAskToController : NSObject

@property (retain, nonatomic) CNXPCContactsSupport *contactsSupport;

+ (id)logAskTo;

- (id)init;
- (void).cxx_destruct;
- (void)sendCommLimitsQuestionForHandles:(id)a0 withReply:(id /* block */)a1;

@end
