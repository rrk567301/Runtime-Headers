@class NSArray;

@interface PLLibraryScopeConditionPerson : PLLibraryScopeCondition

@property (copy, nonatomic) NSArray *personUUIDs;

+ (id)conditionWithSingleQueries:(id)a0 criteria:(unsigned char)a1;
+ (char)supportsQueryKey:(int)a0;

- (id)description;
- (void).cxx_destruct;
- (unsigned char)type;
- (id)conditionQuery;
- (char)removePersonUUID:(id)a0;
- (char)replaceTombstonePersonUUID:(id)a0 withPersonUUID:(id)a1;

@end
