@class NSArray, CNChangeHistoryAnchor;

@interface CNChangeHistoryResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL changesTruncated;
@property (retain, nonatomic) CNChangeHistoryAnchor *latestChangeAnchor;
@property (retain, nonatomic) NSArray *contactChanges;
@property (retain, nonatomic) NSArray *groupChanges;
@property (retain, nonatomic) NSArray *labeledValueChanges;
@property (retain, nonatomic) NSArray *events;
@property (nonatomic) BOOL unifyResults;
@property (nonatomic) long long changesCount;

- (id)groupChangesEnumeratorWithContactStore:(id)a0;
- (id)labeledValueChangesEnumeratorWithContactStore:(id)a0;
- (BOOL)enumerateGroupChangesFromContactStore:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)enumerateContactChangesWithKeysToFetch:(id)a0 fromContactStore:(id)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)contactChangesEnumeratorWithKeysToFetch:(id)a0 contactStore:(id)a1;

@end
