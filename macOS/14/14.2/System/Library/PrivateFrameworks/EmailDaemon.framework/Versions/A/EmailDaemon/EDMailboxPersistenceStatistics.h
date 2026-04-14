@class NSDictionary, NSString;

@interface EDMailboxPersistenceStatistics : NSObject

@property (readonly, nonatomic) long long messagesInLargestMailbox;
@property (readonly, nonatomic) long long messagesInSecondLargestMailbox;
@property (readonly, retain, nonatomic) NSDictionary *messagesPerMailbox;
@property (readonly, retain, nonatomic) NSDictionary *mailboxesPerAccount;
@property (readonly, retain, nonatomic) NSDictionary *messagesPerAccount;
@property (readonly, retain, nonatomic) NSDictionary *messagesPerInbox;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *redactedDescription;

- (void).cxx_destruct;
- (id)initWithMessagesInLargestMailbox:(long long)a0 messagesInSecondLargestMailbox:(long long)a1 messagesPerMailbox:(id)a2 mailboxesPerAccount:(id)a3 messagesPerAccount:(id)a4 messagesPerInbox:(id)a5;

@end
