@class ABGroup, NSMutableArray, ABAddressBook;

@interface ABRemoveMembersCommandBuilder : NSObject {
    ABGroup *_group;
    NSMutableArray *_memberIdentifiers;
    ABAddressBook *_addressBook;
}

@property (readonly) unsigned long long countOfRemovedMembers;

- (id)build;
- (void).cxx_destruct;
- (void)removeMember:(id)a0;
- (id)initWithGroup:(id)a0 addressBook:(id)a1;

@end
