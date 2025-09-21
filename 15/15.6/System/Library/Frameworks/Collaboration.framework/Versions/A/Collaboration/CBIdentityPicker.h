@class NSString, NSArray;

@interface CBIdentityPicker : NSObject {
    id _reserved[2];
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) char allowsMultipleSelection;
@property (readonly, nonatomic) NSArray *identities;

- (void)dealloc;
- (id)init;
- (long long)runModal;
- (id)defaultButtonTitle;
- (void)setDefaultButtonTitle:(id)a0;
- (void)setShowsGroups:(char)a0;
- (char)showsLocalUsers;
- (id)disabledIdentities;
- (void)runModalForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)runModalForWindow:(id)a0 modalDelegate:(id)a1 didEndSelector:(SEL)a2 contextInfo:(void *)a3;
- (void)setDisabledIdentities:(id)a0;
- (void)setShowsAddressBook:(char)a0;
- (void)setShowsAddressBookGroups:(char)a0;
- (void)setShowsHiddenIdentities:(char)a0;
- (void)setShowsLocalGroups:(char)a0;
- (void)setShowsLocalIdentities:(char)a0;
- (void)setShowsLocalUsers:(char)a0;
- (void)setShowsNetworkGroups:(char)a0;
- (void)setShowsNetworkIdentities:(char)a0;
- (void)setShowsNetworkUsers:(char)a0;
- (void)setShowsNewPersonButton:(char)a0;
- (void)setShowsSharingOnlyUsers:(char)a0;
- (void)setShowsUsers:(char)a0;
- (char)showsAddressBook;
- (char)showsAddressBookGroups;
- (char)showsGroups;
- (char)showsHiddenIdentities;
- (char)showsLocalGroups;
- (char)showsLocalIdentities;
- (char)showsNetworkGroups;
- (char)showsNetworkIdentities;
- (char)showsNetworkUsers;
- (char)showsNewPersonButton;
- (char)showsSharingOnlyUsers;
- (char)showsUsers;

@end
