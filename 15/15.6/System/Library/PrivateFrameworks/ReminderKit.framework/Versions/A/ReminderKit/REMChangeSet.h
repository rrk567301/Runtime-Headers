@class NSError, NSArray;

@interface REMChangeSet : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSError *error;
@property (nonatomic) char isTruncated;
@property (retain, nonatomic) NSArray *inserts;
@property (retain, nonatomic) NSArray *updates;
@property (retain, nonatomic) NSArray *deletes;
@property (retain, nonatomic) NSArray *filterByTransactionAuthorStrings;
@property (nonatomic) char filterByTransactionAuthorsIsExclusion;
@property (retain, nonatomic) NSArray *filteredTransactions;
@property (readonly, nonatomic) NSArray *transactions;

+ (id)errorChangeSetWithError:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(id)a0;
- (char)_filterAndFlattenAndConsolidateChanges;
- (char)applyFilterByTransactionAuthors:(id)a0 isExclusion:(char)a1;
- (char)consolidateAndFilterChangesWithTransactionAuthors:(id)a0 isExclusion:(char)a1;
- (char)enumerateChanges:(long long)a0 forModelsOfClass:(Class)a1 withBlock:(id /* block */)a2;
- (id)initWithChangeTransactions:(id)a0;
- (id)lastChangeTokenForAccountID:(id)a0;

@end
