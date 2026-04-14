@interface NFLocalAccount : NFAccount

@property (nonatomic) BOOL migrationOffered;

+ (id)existingLocalAccountForContext:(id)a0;
+ (id)localAccountWithContext:(id)a0;

- (void)awakeFromInsert;
- (BOOL)updateAvailability;
- (void)awakeFromFetch;
- (long long)accountClassPriority;
- (id)recoveredItemsFolder;

@end
