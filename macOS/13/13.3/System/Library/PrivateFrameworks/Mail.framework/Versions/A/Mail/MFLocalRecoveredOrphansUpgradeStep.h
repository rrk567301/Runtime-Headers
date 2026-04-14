@class NSArray;

@interface MFLocalRecoveredOrphansUpgradeStep : MFLibraryUpgradeStep

@property (readonly, copy, nonatomic) NSArray *accounts;

+ (BOOL)needToPerformFromMinorVersion:(unsigned long long)a0 initialLastWriteMinorVersion:(unsigned long long)a1;
+ (unsigned long long)targetVersion;

- (void).cxx_destruct;
- (id)initWithDatabaseConnection:(id)a0;
- (id)initWithDatabaseConnection:(id)a0 accounts:(id)a1;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
