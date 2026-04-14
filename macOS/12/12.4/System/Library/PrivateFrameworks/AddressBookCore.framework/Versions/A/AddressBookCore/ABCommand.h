@class ABAddressBook;

@interface ABCommand : NSObject {
    BOOL _save;
    ABAddressBook *_addressBook;
}

+ (id)bundle;

- (id)init;
- (void).cxx_destruct;
- (BOOL)save;
- (id)_undoManager;
- (id)initWithAddressBook:(id)a0;
- (id)addressBook;
- (void)undoIt;
- (void)redoIt;
- (BOOL)doIt;
- (id)undoer;
- (void)setSave:(BOOL)a0;
- (BOOL)performWithActionName:(id)a0;

@end
