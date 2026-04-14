@class ABFaceTimeCommunicationsBridge, ABCommunicationButtonsController, CNContact;
@protocol CNUIUserActionListDataSource;

@interface ABFaceTimeActionsCollectionViewItem : ABCollectionViewItem

@property (nonatomic) BOOL availableForFaceTime;
@property (retain, nonatomic) ABFaceTimeCommunicationsBridge *faceTimeBridge;
@property (retain, nonatomic) ABCommunicationButtonsController *buttonsController;
@property (weak, nonatomic) id<CNUIUserActionListDataSource> actionsDataSource;
@property (retain, nonatomic) CNContact *contact;

- (id)init;
- (void).cxx_destruct;
- (void)updateView;
- (id)_localizedLabel;
- (id)_labelMenuItems;
- (BOOL)supportsClickToEdit;
- (void)_updateViewLabel;
- (void)didInsertIntoCollectionView:(id)a0;
- (void)datumViewWantsActionGlyphs:(id)a0;
- (id)faceTimeRowView;

@end
