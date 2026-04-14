@class NSSet, HDDatabaseTransactionContextStatistics, NSMutableSet;

@interface HDDatabaseTransactionContext : NSObject <NSCopying, NSMutableCopying> {
    unsigned long long _options;
    NSMutableSet *_accessibilityAssertions;
}

@property (readonly, nonatomic) BOOL skipJournalMerge;
@property (readonly, nonatomic) BOOL skipTransactionStartTasks;
@property (readonly, nonatomic) BOOL requiresNewDatabaseConnection;
@property (readonly, copy, nonatomic) NSSet *accessibilityAssertions;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) long long journalType;
@property (readonly, nonatomic) long long cacheScope;
@property (readonly, nonatomic) BOOL requiresWrite;
@property (readonly, nonatomic) BOOL requiresProtectedData;
@property (readonly, nonatomic) BOOL highPriority;
@property (readonly, nonatomic) HDDatabaseTransactionContextStatistics *statistics;
@property (readonly, nonatomic) BOOL allowsJournalingDuringProtectedRead;

+ (id)contextForAccessibilityAssertion:(id)a0;
+ (id)contextForWriting;
+ (id)contextForReading;
+ (id)contextForReadingProtectedData;
+ (id)contextForWritingProtectedData;
+ (id)highPriorityContext;

- (BOOL)containsContext:(id)a0 error:(id *)a1;
- (id)_initWithOptions:(unsigned long long)a0;
- (id)copyForReadingProtectedData;
- (id)copyForWritingProtectedData;
- (id)description;
- (id)init;
- (id)copyForWriting;
- (void).cxx_destruct;
- (id)mergedContextWithContext:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
