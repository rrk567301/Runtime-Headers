@class NSSet, NSDictionary, NSArray;

@interface MTChangeSet : NSObject

@property (retain, nonatomic) NSSet *changedProperties;
@property (retain, nonatomic) NSDictionary *changeDictionary;
@property (readonly, nonatomic) NSArray *changes;

+ (id)dictionaryFromChanges:(id)a0;
+ (id)changeSetWithChangesFromObject:(id)a0 toObject:(id)a1;
+ (id)changeSetWithChangesFromObject:(id)a0 toObject:(id)a1 inProperties:(id)a2;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithChanges:(id)a0;
- (id)_deserializer;
- (char)_isEqualToChangeSet:(id)a0 checkOriginalValues:(char)a1;
- (id)changeSetByAddingChangeSet:(id)a0;
- (id)changedValueForProperty:(id)a0 hasProperty:(char *)a1;
- (id)deserializedChangedValueForProperty:(id)a0 hasProperty:(char *)a1;
- (char)hasChangeForProperty:(id)a0;
- (char)hasChangesInCommonWithChangeSet:(id)a0;
- (char)hasChangesInProperties:(id)a0;
- (id)initWithChangeDictionary:(id)a0;
- (char)isEquivalentToChangeSet:(id)a0;

@end
