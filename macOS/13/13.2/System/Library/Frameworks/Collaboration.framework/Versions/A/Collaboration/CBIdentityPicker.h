@class NSString, NSArray;

@interface CBIdentityPicker : NSObject {
    id _reserved[2];
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL allowsMultipleSelection;
@property (readonly, nonatomic) NSArray *identities;

- (void)dealloc;
- (id)init;
- (long long)runModal;
- (void)setDefaultButtonTitle:(id)a0;
- (id)defaultButtonTitle;
- (void)runModalForWindow:(id)a0 modalDelegate:(id)a1 didEndSelector:(SEL)a2 contextInfo:(void *)a3;
- (void)runModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)setShowsHiddenIdentities:(BOOL)a0;
- (BOOL)showsHiddenIdentities;
- (void)setShowsLocalUsers:(BOOL)a0;
- (BOOL)showsLocalUsers;
- (void)setShowsLocalGroups:(BOOL)a0;
- (BOOL)showsLocalGroups;
- (void)setShowsNetworkUsers:(BOOL)a0;
- (BOOL)showsNetworkUsers;
- (void)setShowsNetworkGroups:(BOOL)a0;
- (BOOL)showsNetworkGroups;
- (void)setShowsGroups:(BOOL)a0;
- (BOOL)showsGroups;
- (void)setShowsUsers:(BOOL)a0;
- (BOOL)showsUsers;
- (void)setShowsLocalIdentities:(BOOL)a0;
- (BOOL)showsLocalIdentities;
- (void)setShowsSharingOnlyUsers:(BOOL)a0;
- (BOOL)showsSharingOnlyUsers;
- (void)setShowsNetworkIdentities:(BOOL)a0;
- (BOOL)showsNetworkIdentities;
- (void)setShowsNewPersonButton:(BOOL)a0;
- (BOOL)showsNewPersonButton;
- (void)setShowsAddressBook:(BOOL)a0;
- (BOOL)showsAddressBook;
- (void)setShowsAddressBookGroups:(BOOL)a0;
- (BOOL)showsAddressBookGroups;
- (void)setDisabledIdentities:(id)a0;
- (id)disabledIdentities;

@end
