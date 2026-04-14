@class NSString, ABAddressBook;

@interface ABLazyGroup : NSObject {
    ABAddressBook *_addressBook;
    NSString *_groupUid;
}

- (id)group;
- (id)uniqueId;
- (void).cxx_destruct;
- (id)initWithAddressBook:(id)a0 group:(id)a1;
- (id)initWithAddressBook:(id)a0 groupUid:(id)a1;

@end
