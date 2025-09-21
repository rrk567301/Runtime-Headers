@class CNContact, ABCardViewSaveHelper, NSString, AKCardViewDataSource, ABCommandExecutor, CNContainer;
@protocol CNContactCardViewControllerLogger, CNContactEditingInterfaceElement;

@interface CNContactSaveAction : NSObject <CNContactCardViewControllerAction>

@property (weak, nonatomic) id<CNContactEditingInterfaceElement> editingInterface;
@property (retain, nonatomic) ABCardViewSaveHelper *saveHelper;
@property (retain, nonatomic) ABCommandExecutor *commandExecutor;
@property (retain, nonatomic) AKCardViewDataSource *dataSource;
@property (retain, nonatomic) ABCommandExecutor *dataSourceCommandExecutor;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNContainer *parentContainer;
@property (nonatomic) char saveWasAuthorized;
@property (nonatomic) char shouldSave;
@property (nonatomic) char shouldRefreshInterface;
@property (nonatomic) char shouldUpdateSharedProfile;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) id<CNContactCardViewControllerLogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void).cxx_destruct;
- (void)perform;
- (void)applySaveWasAuthorizedValue;
- (void)beginSaveProcess;
- (void)cleanUpAfterSave;
- (void)configureSave;
- (void)endSaveProcess;
- (void)executeSave;
- (char)hasChangesToSave;
- (char)hasUpdatedAccountKeyToSave;
- (void)refreshInterface;
- (void)saveAccountKeyToStore;
- (void)saveLikenessChangesToSharedProfile;
- (char)shouldAttemptToSave;
- (void)startIgnoringGuardianRestrictions;
- (void)stopIgnoringGuardianRestrictions;

@end
