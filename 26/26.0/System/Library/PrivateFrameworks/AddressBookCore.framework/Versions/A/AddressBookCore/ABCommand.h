@class ABAddressBook;

@interface ABCommand : NSObject {
    BOOL _save;
    ABAddressBook *_addressBook;
}

+ (id)bundle;

- (BOOL)save;
- (id)addressBook;
- (id)init;
- (void).cxx_destruct;
- (id)_undoManager;
- (BOOL)doIt;
- (id)initWithAddressBook:(id)a0;
- (BOOL)performWithActionName:(id)a0;
- (void)redoIt;
- (void)setSave:(BOOL)a0;
- (void)undoIt;
- (id)undoer;

@end
