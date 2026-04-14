@class CNContactFormatter;

@interface CNMessageToGroup : NSObject

@property (retain, nonatomic) CNContactFormatter *contactFormatter;

+ (id)os_log;
+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)init;
- (id)emailAddressForContact:(id)a0;
- (id)messageUrlForContacts:(id)a0;
- (id)messagingAddressForContact:(id)a0;
- (id)santizeMessagingAddress:(id)a0;

@end
