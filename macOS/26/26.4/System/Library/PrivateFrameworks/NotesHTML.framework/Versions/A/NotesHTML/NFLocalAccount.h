@interface NFLocalAccount : NFAccount

@property (nonatomic) BOOL migrationOffered;

+ (id)existingLocalAccountForContext:(id)a0;
+ (id)localAccountWithContext:(id)a0;

- (void)awakeFromInsert;
- (void)awakeFromFetch;
- (BOOL)updateAvailability;
- (long long)accountClassPriority;
- (id)recoveredItemsFolder;

@end
