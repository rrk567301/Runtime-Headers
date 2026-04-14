@class NSArray, CNUICoreContactEditingSession, NSString, CNUICoreContactTypeAssessor;
@protocol CNUICoreFamilyMemberContactsObserver, CNUICoreFamilyMemberWhitelistedContactsDataSource, CNUICoreFamilyInfoFetching, CNUICoreContactStoreFacade, CNSchedulerProvider, CNCancelable;

@interface CNUICoreInMemoryWhitelistedContactsDataSourceDecorator : NSObject <CNUICoreFamilyMemberContactsObserver, CNUICoreFamilyMemberWhitelistedContactsDataSource>

@property (readonly, nonatomic) id<CNUICoreFamilyMemberWhitelistedContactsDataSource> dataSource;
@property (readonly, nonatomic) id<CNUICoreContactStoreFacade> mainContactStore;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) id<CNUICoreFamilyInfoFetching> familyInfoRetriever;
@property (readonly, nonatomic) CNUICoreContactTypeAssessor *contactTypeAssessor;
@property (retain, nonatomic) CNUICoreContactEditingSession *editingSession;
@property (retain, nonatomic) NSArray *familyMemberContactItemsSnapshot;
@property (retain, nonatomic) id<CNCancelable> endEditingNotificationToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNUICoreFamilyMemberContactsObserver> observer;
@property (readonly, nonatomic) long long fetchStatus;
@property (readonly, nonatomic) NSArray *familyMemberContactItems;
@property (readonly, nonatomic) BOOL familyMemberContainerIsEmpty;

+ (id)modelBuilderForAddedContacts:(id)a0 withContactTypeAssessor:(id)a1;
+ (id)modelBuilderForContacts:(id)a0 withContactTypeAssessor:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)familyMemberContactItemsDidChange;
- (void)updateWhitelistByAddingContacts:(id)a0;
- (void)updateWhitelistByUpdatingContacts:(id)a0;
- (void)updateWhitelistByRemovingContacts:(id)a0;
- (id)contactRepresentingItem:(id)a0;
- (void)finishWhitelistedContactsTasks;
- (id)initWithDataSource:(id)a0 schedulerProvider:(id)a1;
- (id)initWithDataSource:(id)a0 familyInfoRetriever:(id)a1 schedulerProvider:(id)a2;
- (id)contactTypeAssesor;
- (void)notifyObserverContactItemsChange;
- (void)executeBlockIfEditingSessionNotInProgress:(id /* block */)a0;
- (void)startEditingSessionIfNecessary;
- (void)startEditingSessionIfNecessaryWithSnapshotOfItems:(id)a0;
- (void)flushEditingSession;
- (id)familyMemberContactItemsFromDataSourceAugmentedWithInMemoryEdits;
- (id)familyMemberContactItemsFromDataSource;
- (void)startImplicitEditngSessionForAnyItemsNotPersistedInItems:(id)a0;
- (void)persistInMemoryContactsWhitelistState;
- (void)finishPersistenceOfInMemoryContactsWhitelistState;

@end
