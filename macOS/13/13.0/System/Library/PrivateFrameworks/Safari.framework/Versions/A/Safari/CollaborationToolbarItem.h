@class NSTextField, NSString, NSArray, NSItemProvider, NSToolbarItem, WBTabGroup, NSStackView, _SWCollaborationToolbarItem, NSLayoutConstraint, NSTableView;
@protocol CollaborationToolbarItemDelegate;

@interface CollaborationToolbarItem : NSObject <NSCloudSharingServiceDelegate, NSTableViewDelegate, NSTableViewDataSource, WBTabGroupSyncAgentSyncObserver> {
    _SWCollaborationToolbarItem *_collaborateItem;
    NSItemProvider *_itemProvider;
    NSTableView *_tableView;
    NSStackView *_containerView;
    NSTextField *_participantsHeader;
    NSLayoutConstraint *_heightConstraint;
    NSArray *_contacts;
}

@property (readonly, nonatomic) WBTabGroup *tabGroup;
@property (readonly, nonatomic) NSToolbarItem *toolbarItem;
@property (weak, nonatomic) id<CollaborationToolbarItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemProviderForTabGroup:(id)a0 window:(id)a1;

- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (id)tableView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)_createStackViewWithSubviews:(id)a0;
- (void)shareDidUpdateForTabGroupWithUUID:(id)a0;
- (void)participantsDidUpdateInTabGroupWithUUID:(id)a0;
- (void)menuTableView:(id)a0 mouseUpInRow:(long long)a1;
- (id)initWithTabGroup:(id)a0;
- (BOOL)_tableViewRowIsSeparator:(long long)a0;
- (BOOL)_tableViewRowIsManageShareButton:(long long)a0;
- (void)_updateShareParticipants;
- (void)_showManageSharedTabGroup;
- (void)_createParticipantsHeader;
- (void)_createTableView;
- (id)_createSeparator;

@end
