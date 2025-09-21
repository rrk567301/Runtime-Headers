@class ABAddressBook;

@interface ABCommand : NSObject {
    char _save;
    ABAddressBook *_addressBook;
}

+ (id)bundle;

- (id)init;
- (void).cxx_destruct;
- (char)save;
- (id)_undoManager;
- (id)addressBook;
- (char)doIt;
- (id)initWithAddressBook:(id)a0;
- (char)performWithActionName:(id)a0;
- (void)redoIt;
- (void)setSave:(char)a0;
- (void)undoIt;
- (id)undoer;

@end
