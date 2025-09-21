@class NSString, ABAddressBook;

@interface ABStrongAddressBookReference : NSObject <ABAddressBookReference> {
    ABAddressBook *_addressBook;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)addressBook;
- (void).cxx_destruct;
- (id)initWithAddressBook:(id)a0;

@end
