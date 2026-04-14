@class NSString;

@interface EDMailboxAction : NSObject

@property (nonatomic) long long actionID;
@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *mailboxName;
@property (copy, nonatomic) NSString *renamedMailboxName;

- (void).cxx_destruct;

@end
