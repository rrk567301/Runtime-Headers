@interface NFLocalAccount : NFAccount

@property (nonatomic) BOOL migrationOffered;

+ (id)existingLocalAccountForContext:(id)a0;
+ (id)localAccountWithContext:(id)a0;

- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (BOOL)updateAvailability;
- (long long)accountClassPriority;
- (id)recoveredItemsFolder;

@end
