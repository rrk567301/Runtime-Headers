@interface NFLocalAccount : NFAccount

@property (nonatomic) char migrationOffered;

+ (id)existingLocalAccountForContext:(id)a0;
+ (id)localAccountWithContext:(id)a0;

- (char)updateAvailability;
- (void)awakeFromInsert;
- (void)awakeFromFetch;
- (long long)accountClassPriority;
- (id)recoveredItemsFolder;

@end
