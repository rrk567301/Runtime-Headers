@interface NFLocalAccount : NFAccount

@property (nonatomic) BOOL migrationOffered;

+ (id)existingLocalAccountForContext:(id)a0;
+ (id)localAccountWithContext:(id)a0;

- (BOOL)updateAvailability;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (long long)accountClassPriority;
- (id)recoveredItemsFolder;

@end
