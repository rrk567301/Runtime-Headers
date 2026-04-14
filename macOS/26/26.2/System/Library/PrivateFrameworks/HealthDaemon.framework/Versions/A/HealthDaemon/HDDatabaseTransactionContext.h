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

+ (id)contextForWritingProtectedData;
+ (id)contextForReading;
+ (id)contextForWriting;
+ (id)contextForAccessibilityAssertion:(id)a0;
+ (id)highPriorityContext;
+ (id)contextForReadingProtectedData;

- (id)_initWithOptions:(unsigned long long)a0;
- (id)mergedContextWithContext:(id)a0 error:(id *)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyForReadingProtectedData;
- (void).cxx_destruct;
- (id)copyForWriting;
- (id)description;
- (id)copyForWritingProtectedData;
- (BOOL)containsContext:(id)a0 error:(id *)a1;
- (id)init;

@end
