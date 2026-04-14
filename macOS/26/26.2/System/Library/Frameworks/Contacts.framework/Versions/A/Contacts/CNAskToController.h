@class CNXPCContactsSupport;

@interface CNAskToController : NSObject

@property (retain, nonatomic) CNXPCContactsSupport *contactsSupport;

+ (id)logAskTo;

- (void).cxx_destruct;
- (id)init;
- (void)sendCommLimitsQuestionForHandles:(id)a0 withReply:(id /* block */)a1;

@end
