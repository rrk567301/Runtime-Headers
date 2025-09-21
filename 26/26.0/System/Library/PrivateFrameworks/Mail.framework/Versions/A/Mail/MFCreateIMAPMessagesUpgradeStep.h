@class NSArray;

@interface MFCreateIMAPMessagesUpgradeStep : MFLibraryUpgradeStep

@property (readonly, copy, nonatomic) NSArray *accounts;

+ (unsigned long long)targetVersion;

- (id)initWithDatabaseConnection:(id)a0;
- (void).cxx_destruct;
- (id)initWithDatabaseConnection:(id)a0 accounts:(id)a1;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
