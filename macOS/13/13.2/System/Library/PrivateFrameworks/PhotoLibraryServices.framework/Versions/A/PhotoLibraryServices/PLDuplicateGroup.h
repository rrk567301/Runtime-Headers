@class NSSet, NSMutableSet;

@interface PLDuplicateGroup : NSObject {
    NSMutableSet *_mutableGroup;
    NSMutableSet *_mutableExcludedGroup;
    NSMutableSet *_mutableSubGroups;
}

@property (readonly) NSSet *group;
@property (readonly) NSSet *excludedGroup;
@property (readonly) NSSet *subGroups;
@property (readonly) BOOL hasExcludedItems;
@property (readonly) BOOL hasSubGroups;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)initWithGroupResults:(id)a0;
- (id)printStringListFromOIDs:(id)a0;
- (void)addManagedObjectID:(id)a0;
- (void)addSubGroup:(id)a0;
- (void)replaceSubGroups:(id)a0;
- (void)excludeManagedObjectID:(id)a0;
- (void)compactSubGroups;

@end
