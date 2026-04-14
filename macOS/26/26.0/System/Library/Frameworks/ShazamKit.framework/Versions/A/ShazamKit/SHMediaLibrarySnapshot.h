@class NSArray, NSMutableOrderedSet;

@interface SHMediaLibrarySnapshot : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMutableOrderedSet *changeset;
@property (readonly) NSArray *changes;
@property (readonly) BOOL hasChanges;
@property (readonly) NSArray *trackChanges;
@property (readonly) NSArray *allItemIdentifiers;

+ (id)remapSnapshot:(id)a0 withBundleIdentifier:(id)a1;

- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addChanges:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithChanges:(id)a0;
- (void).cxx_destruct;
- (void)removeSnapshot:(id)a0;
- (id)filteredSnapshotUsingPredicate:(id)a0;
- (BOOL)containsLibraryItem:(id)a0;
- (BOOL)evaluateUsingPredicate:(id)a0;
- (BOOL)isConflictingChange:(id)a0;
- (void)mergeSnapshot:(id)a0;
- (id)tracksForChangeType:(long long)a0;
- (BOOL)validateWithBundleIdentifier:(id)a0;

@end
