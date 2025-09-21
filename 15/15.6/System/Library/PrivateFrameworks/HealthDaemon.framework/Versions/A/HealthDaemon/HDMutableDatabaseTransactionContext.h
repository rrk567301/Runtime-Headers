@class HDDatabaseTransactionContextStatistics;

@interface HDMutableDatabaseTransactionContext : HDDatabaseTransactionContext

@property (nonatomic) char skipJournalMerge;
@property (nonatomic) char skipTransactionStartTasks;
@property (nonatomic) char requiresNewDatabaseConnection;
@property (nonatomic) char allowsJournalingDuringProtectedRead;
@property (nonatomic) long long journalType;
@property (nonatomic) long long cacheScope;
@property (nonatomic) char requiresWrite;
@property (nonatomic) char requiresProtectedData;
@property (nonatomic) char highPriority;
@property (retain, nonatomic) HDDatabaseTransactionContextStatistics *statistics;

+ (id)contextForAccessibilityAssertion:(id)a0;
+ (id)contextForReading;
+ (id)contextForReadingProtectedData;
+ (id)contextForWriting;
+ (id)contextForWritingProtectedData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStatistics:(id)a0;
- (void)setHighPriority:(char)a0;
- (void)setRequiresProtectedData:(char)a0;
- (void)setCacheScope:(long long)a0;
- (void)setJournalType:(long long)a0;
- (void)addAccessibilityAssertion:(id)a0;
- (void)addAccessibilityAssertions:(id)a0;
- (id)contextWithAccessibilityAssertion:(id)a0;
- (void)setAllowsJournalingDuringProtectedRead:(char)a0;
- (void)setRequiresNewDatabaseConnection:(char)a0;
- (void)setRequiresWrite:(char)a0;
- (void)setSkipJournalMerge:(char)a0;
- (void)setSkipTransactionStartTasks:(char)a0;

@end
