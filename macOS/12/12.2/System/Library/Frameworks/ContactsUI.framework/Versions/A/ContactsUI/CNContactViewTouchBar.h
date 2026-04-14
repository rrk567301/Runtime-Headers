@class NSTouchBar, NSSharingServicePickerTouchBarItem, NSString, CNUIVCardSharingTask, NSPopoverTouchBarItem, CNAddFieldTouchBar, CNUserActionTouchBar, CNUIUserActionListDataSource, CNContact, NSGroupTouchBarItem, NSButton;
@protocol CNContactViewTouchBarDelegate;

@interface CNContactViewTouchBar : NSObject <CNAddFieldTouchBarDelegate, CNUIShareKitTransitionProvider, NSTouchBarProvider>

@property (weak, nonatomic) id<CNContactViewTouchBarDelegate> delegate;
@property (weak, nonatomic) CNUIUserActionListDataSource *userActionListDataSource;
@property (retain, nonatomic) NSTouchBar *touchBar;
@property (retain, nonatomic) CNAddFieldTouchBar *addFieldTouchBar;
@property (retain, nonatomic) NSPopoverTouchBarItem *addFieldPopoverItem;
@property (retain, nonatomic) CNUserActionTouchBar *userActionTouchBar;
@property (retain, nonatomic) NSButton *editButton;
@property (retain, nonatomic) CNUIVCardSharingTask *sharingTask;
@property (retain, nonatomic) NSSharingServicePickerTouchBarItem *shareItem;
@property (retain, nonatomic) NSGroupTouchBarItem *groupItem;
@property (retain, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)addField:(id)a0;
- (void)updateTouchBar;
- (id)initWithDelegate:(id)a0 userActionListDataSource:(id)a1;
- (void)setupTouchBar;
- (void)setupAddFieldItemAndTouchBar;
- (void)setupUserActionTouchBar;
- (void)setupEditButton;
- (void)setupSharingTaskAndItem;
- (void)setupGroupItem;
- (void)_updateTouchBarIdentifiers;
- (void)updateShareItem;
- (BOOL)canAddContactOrGroup;
- (BOOL)canAddField;
- (void)addContact;
- (void)addGroup;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })profilePhotoScreenRect;
- (id)profilePhotoImage;
- (id)hostWindowForShareSheet;

@end
