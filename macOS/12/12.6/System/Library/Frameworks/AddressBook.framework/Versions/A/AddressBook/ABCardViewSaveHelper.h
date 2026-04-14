@class CNContactStore, AKCardViewDataSource, ABCommandExecutor, CNContainer;
@protocol ABCardViewSaveHelperDelegate;

@interface ABCardViewSaveHelper : NSObject

@property (retain, nonatomic) CNContactStore *contactStore;
@property (nonatomic) BOOL isSaving;
@property (nonatomic) BOOL hasSaved;
@property (retain, nonatomic) AKCardViewDataSource *dataSource;
@property (retain, nonatomic) ABCommandExecutor *commandExecutor;
@property (retain, nonatomic) CNContainer *parentContainer;
@property (nonatomic) BOOL isContactNewlyCreated;
@property (nonatomic) BOOL ignoresGuardianRestrictions;
@property (weak, nonatomic) id<ABCardViewSaveHelperDelegate> delegate;

- (void).cxx_destruct;
- (void)save;
- (id)initWithContactStore:(id)a0;
- (BOOL)canSave;
- (void)saveEmptyDataSource;
- (void)saveDataSourceWithChanges;
- (void)deleteUnsavedContact;
- (void)deletePeople;
- (id)makeUpdateCommandForUpdatedContacts:(id)a0;
- (id)makeDeleteCommandForDeletedContacts:(id)a0;
- (void)executeCommand:(id)a0;
- (void)addPerson;
- (BOOL)shouldAddNewPersonToStoreDataSourceChanges;
- (void)addNewPersonToStoreDataSourceChanges;
- (void)updatePeople;
- (id)makeAddCommandForContacts:(id)a0 toContainer:(id)a1;
- (BOOL)dataSourceHasNonLinkChanges;
- (BOOL)hasPhotoChanges;
- (id)makeNewPersonToStoreDataSourceChanges;
- (BOOL)hasNameChanges;
- (void)preferForNameContact:(id)a0 inContacts:(id)a1;
- (void)preferForPhotoContact:(id)a0 inContacts:(id)a1;
- (id)makeSetImageCommandForContact:(id)a0;
- (id)makeLinkCommandForContacts:(id)a0 linkIdentifier:(id)a1;
- (id)propertiesToSetOnNewPerson;
- (void)applyProperties:(id)a0 fromContact:(id)a1 toContact:(id)a2;
- (id)contactByApplyingChangesFromContact:(id)a0 toContact:(id)a1;

@end
