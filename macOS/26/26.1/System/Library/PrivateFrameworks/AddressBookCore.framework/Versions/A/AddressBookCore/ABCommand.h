@class ABAddressBook;

@interface ABCommand : NSObject {
    BOOL _save;
    ABAddressBook *_addressBook;
}

+ (id)bundle;

- (void).cxx_destruct;
- (id)addressBook;
- (BOOL)save;
- (id)init;
- (id)_undoManager;
- (BOOL)doIt;
- (id)initWithAddressBook:(id)a0;
- (BOOL)performWithActionName:(id)a0;
- (void)redoIt;
- (void)setSave:(BOOL)a0;
- (void)undoIt;
- (id)undoer;

@end
