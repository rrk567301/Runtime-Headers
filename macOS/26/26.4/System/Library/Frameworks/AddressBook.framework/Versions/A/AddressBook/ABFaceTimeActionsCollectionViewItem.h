@class ABFaceTimeCommunicationsBridge, ABCommunicationButtonsController, CNContact;
@protocol CNUIUserActionListDataSource;

@interface ABFaceTimeActionsCollectionViewItem : ABCollectionViewItem

@property (nonatomic) BOOL availableForFaceTime;
@property (retain, nonatomic) ABFaceTimeCommunicationsBridge *faceTimeBridge;
@property (retain, nonatomic) ABCommunicationButtonsController *buttonsController;
@property (weak, nonatomic) id<CNUIUserActionListDataSource> actionsDataSource;
@property (retain, nonatomic) CNContact *contact;

- (void)updateView;
- (void).cxx_destruct;
- (id)init;
- (id)_labelMenuItems;
- (id)_localizedLabel;
- (id)faceTimeRowView;
- (void)_updateViewLabel;
- (void)datumViewWantsActionGlyphs:(id)a0;
- (void)didInsertIntoCollectionView:(id)a0;
- (BOOL)supportsClickToEdit;

@end
