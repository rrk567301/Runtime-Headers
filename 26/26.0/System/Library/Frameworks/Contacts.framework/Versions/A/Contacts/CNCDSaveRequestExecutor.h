@class CNCDContainerSaveExecutor, CNCDGroupSaveExecutor, CNCDSaveContext, CNCDContactSaveExecutor, CNCDGroupMembershipSaveExecutor;

@interface CNCDSaveRequestExecutor : NSObject {
    CNCDSaveContext *_saveContext;
    CNCDContactSaveExecutor *_contactSaveExecutor;
    CNCDGroupSaveExecutor *_groupSaveExecutor;
    CNCDGroupMembershipSaveExecutor *_groupMembershipSaveExecutor;
    CNCDContainerSaveExecutor *_containerSaveExecutor;
}

+ (BOOL)executeSaveRequest:(id)a0 inPersistenceStack:(id)a1 posterDataStore:(id)a2 error:(id *)a3;

- (id)allContactIdentifiers;
- (id)init;
- (id)allGroupIdentifiers;
- (void).cxx_destruct;
- (id)contactsErrorFromCoreDataError:(id)a0;
- (id)initWithSaveRequest:(id)a0 persistenceContext:(id)a1 context:(id)a2 posterDataStore:(id)a3;
- (id)recordsForErrorFromIdentifiers:(id)a0;
- (id)allContainerIdentifiers;
- (BOOL)executeSaveRequest:(id *)a0;
- (BOOL)loadContactsCache:(id *)a0;
- (BOOL)loadContainersCache:(id *)a0;
- (BOOL)loadGroupsCache:(id *)a0;
- (BOOL)updateContactsCache:(id *)a0;
- (BOOL)updateContainersCache:(id *)a0;
- (BOOL)updateGroupsCache:(id *)a0;

@end
