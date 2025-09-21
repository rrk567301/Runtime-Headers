@class NFAccount;

@interface NFOfflineAction : NSManagedObject

@property (nonatomic) long long sequenceNumber;
@property (retain, nonatomic) NFAccount *account;

+ (char)pendingOfflineActionsExist;

- (void)awakeFromInsert;
- (id)compactDescription;

@end
