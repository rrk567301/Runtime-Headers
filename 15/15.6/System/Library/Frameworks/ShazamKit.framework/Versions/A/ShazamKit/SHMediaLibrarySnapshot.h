@class NSArray, NSMutableOrderedSet;

@interface SHMediaLibrarySnapshot : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSMutableOrderedSet *changeset;
@property (readonly) NSArray *changes;
@property (readonly) char hasChanges;
@property (readonly) NSArray *trackChanges;
@property (readonly) NSArray *allItemIdentifiers;

+ (id)remapSnapshot:(id)a0 withBundleIdentifier:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addItem:(id)a0;
- (void)addChanges:(id)a0;
- (id)initWithChanges:(id)a0;
- (void)removeItem:(id)a0;
- (id)filteredSnapshotUsingPredicate:(id)a0;
- (void)removeSnapshot:(id)a0;
- (char)containsLibraryItem:(id)a0;
- (char)evaluateUsingPredicate:(id)a0;
- (char)isConflictingChange:(id)a0;
- (void)mergeSnapshot:(id)a0;
- (id)tracksForChangeType:(long long)a0;
- (char)validateWithBundleIdentifier:(id)a0;

@end
