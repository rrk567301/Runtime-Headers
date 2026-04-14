@class _ABPersonView, NSString, SGRealtimeContact, NSLayoutConstraint, ABPerson, ABAddressBook;
@protocol SuggestedContactPopoverControllerDelegate;

@interface SGUISuggestedContactPopoverViewController : NSViewController <ABPersonViewDelegate>

@property (weak, nonatomic) _ABPersonView *personView;
@property (weak, nonatomic) NSLayoutConstraint *contentHeightConstraint;
@property (weak, nonatomic) NSLayoutConstraint *totalHeightConstraint;
@property (readonly, nonatomic) BOOL isNewContact;
@property (retain, nonatomic) ABPerson *representedPerson;
@property (retain, nonatomic) ABAddressBook *addressBook;
@property (retain, nonatomic) NSString *ignoreTitle;
@property (retain) SGRealtimeContact *representedObject;
@property (weak, nonatomic) id<SuggestedContactPopoverControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_addressDictionaryFromComponents:(id)a0;
+ (id)keyPathsForValuesAffectingIsNewContact;
+ (id)keyPathsForValuesAffectingIgnoreTitle;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)nibBundle;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)setContentHeight:(double)a0;
- (void)updateContacts:(id)a0;
- (void)_populateRepresentedPerson:(id)a0;
- (void)ignoreContact:(id)a0;

@end
