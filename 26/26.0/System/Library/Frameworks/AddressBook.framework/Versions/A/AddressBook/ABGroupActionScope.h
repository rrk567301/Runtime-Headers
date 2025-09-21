@class ABAccount, ABRecordContext, ABGroup, ABAddressBook;

@interface ABGroupActionScope : NSObject

@property (readonly) ABAccount *account;
@property (readonly) ABAddressBook *addressBook;
@property (readonly) ABRecordContext *recordContext;
@property (readonly) ABGroup *group;

- (id)groups;
- (void).cxx_destruct;
- (id)initWithGroup:(id)a0;
- (id)initWithAccount:(id)a0 addressBook:(id)a1 group:(id)a2;

@end
