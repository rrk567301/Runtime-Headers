@class ABAddressBook;

@interface ABAddressBookCommandExecutionPolicy : ABCommandExecutionPolicy {
    ABAddressBook *_addressBook;
    SEL _saveHook;
}

- (void).cxx_destruct;
- (void)runWithBlock:(id /* block */)a0;
- (void)saveHook;
- (void)nullSaveHook;
- (id)initWithAddressBook:(id)a0 saveOnExecute:(BOOL)a1;

@end
