@class NSString, ABAddressBook;

@interface ABLazyGroup : NSObject {
    ABAddressBook *_addressBook;
    NSString *_groupUid;
}

- (id)group;
- (void).cxx_destruct;
- (id)uniqueId;
- (id)initWithAddressBook:(id)a0 group:(id)a1;
- (id)initWithAddressBook:(id)a0 groupUid:(id)a1;

@end
