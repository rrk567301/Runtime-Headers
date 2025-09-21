@class ABAddressBook;

@interface ABAddressBookCommandExecutionPolicy : ABCommandExecutionPolicy {
    ABAddressBook *_addressBook;
    SEL _saveHook;
}

- (void).cxx_destruct;
- (id)initWithAddressBook:(id)a0 saveOnExecute:(char)a1;
- (void)nullSaveHook;
- (void)runWithBlock:(id /* block */)a0;
- (void)saveHook;

@end
