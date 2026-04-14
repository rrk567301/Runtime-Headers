@class NSString;

@interface IMAPMailboxAction : NSObject

@property (nonatomic) long long actionID;
@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *mailboxName;

- (void).cxx_destruct;

@end
