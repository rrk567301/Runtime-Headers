@class NSArray;

@interface PLLibraryScopeConditionPerson : PLLibraryScopeCondition

@property (copy, nonatomic) NSArray *personUUIDs;

+ (id)conditionWithSingleQueries:(id)a0 criteria:(unsigned char)a1;
+ (BOOL)supportsQueryKey:(int)a0;

- (id)description;
- (void).cxx_destruct;
- (unsigned char)type;
- (id)conditionQuery;
- (BOOL)replaceTombstonePersonUUID:(id)a0 withPersonUUID:(id)a1;
- (BOOL)removePersonUUID:(id)a0;

@end
