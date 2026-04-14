@class NSArray, ABAddressBook;

@interface ABResolveDuplicateGroupsTask : CNTask

@property (readonly, copy) NSArray *duplicateGroups;
@property (readonly) unsigned long long strategy;
@property (readonly) ABAddressBook *addressBook;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)run:(id *)a0;
- (id)initWithDuplicateGroups:(id)a0 strategy:(unsigned long long)a1 addressBook:(id)a2;
- (void)doRemoveAll;
- (void)doMergeIntoOne;

@end
