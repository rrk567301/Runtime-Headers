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
@property (nonatomic) BOOL saveWasAuthorized;
@property (nonatomic) BOOL shouldSave;
@property (nonatomic) BOOL shouldRefreshInterface;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) id<CNContactCardViewControllerLogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)perform;
- (BOOL)shouldAttemptToSave;
- (void)beginSaveProcess;
- (BOOL)hasChangesToSave;
- (void)configureSave;
- (void)executeSave;
- (void)cleanUpAfterSave;
- (void)refreshInterface;
- (void)endSaveProcess;
- (void)applySaveWasAuthorizedValue;
- (void)startIgnoringGuardianRestrictions;
- (void)stopIgnoringGuardianRestrictions;

@end
