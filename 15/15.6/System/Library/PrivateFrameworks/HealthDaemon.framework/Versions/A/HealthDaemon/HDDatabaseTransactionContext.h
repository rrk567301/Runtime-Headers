@class NSSet, HDDatabaseTransactionContextStatistics, NSMutableSet;

@interface HDDatabaseTransactionContext : NSObject <NSCopying, NSMutableCopying> {
    unsigned long long _options;
    NSMutableSet *_accessibilityAssertions;
}

@property (readonly, nonatomic) char skipJournalMerge;
@property (readonly, nonatomic) char skipTransactionStartTasks;
@property (readonly, nonatomic) char requiresNewDatabaseConnection;
@property (readonly, nonatomic) char allowsJournalingDuringProtectedRead;
@property (readonly, copy, nonatomic) NSSet *accessibilityAssertions;
@property (readonly, nonatomic, getter=isEmpty) char empty;
@property (readonly, nonatomic) long long journalType;
@property (readonly, nonatomic) long long cacheScope;
@property (readonly, nonatomic) char requiresWrite;
@property (readonly, nonatomic) char requiresProtectedData;
@property (readonly, nonatomic) char highPriority;
@property (readonly, nonatomic) HDDatabaseTransactionContextStatistics *statistics;

+ (id)contextForAccessibilityAssertion:(id)a0;
+ (id)contextForReading;
+ (id)contextForReadingProtectedData;
+ (id)contextForWriting;
+ (id)contextForWritingProtectedData;
+ (id)highPriorityContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithOptions:(unsigned long long)a0;
- (id)mergedContextWithContext:(id)a0 error:(id *)a1;
- (char)containsContext:(id)a0 error:(id *)a1;
- (id)copyForReadingProtectedData;
- (id)copyForWriting;
- (id)copyForWritingProtectedData;

@end
