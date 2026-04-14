@class IMBusinessNameManager, NSMutableDictionary, NSHashTable;

@interface IMHandleRegistrar : NSObject {
    NSMutableDictionary *_siblingsMap;
    NSHashTable *_allIMHandles;
    NSMutableDictionary *_IDToHandlesMap;
    NSMutableDictionary *_CNIDToHandlesMap;
    IMBusinessNameManager *_businessNameManager;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)businessNameForUID:(id)a0 updateHandler:(id /* block */)a1;
- (id)allIMHandles;
- (void)_dumpOutAllIMHandlesForAccount:(id)a0;
- (id)handlesForCNIdentifier:(id)a0;
- (void)removeHandleFromCNIDMap:(id)a0 withCNID:(id)a1;
- (void)clearSiblingCacheForIMHandle:(id)a0;
- (void)registerIMHandle:(id)a0;
- (void)unregisterIMHandle:(id)a0;
- (void)addHandleToCNIDMap:(id)a0 CNContact:(id)a1;
- (id)_existingAccountSiblingsForHandle:(id)a0;
- (id)_accountSiblingsForHandle:(id)a0;
- (id)_existingChatSiblingsForHandle:(id)a0;
- (id)_chatSiblingsForHandle:(id)a0;
- (id)siblingsForIMHandle:(id)a0;
- (void)_addressBookChanged;
- (id)getIMHandlesForID:(id)a0;
- (void)processContactChangeHistoryEventWithHandleIDs:(id)a0 andCNContact:(id)a1;
- (void)clearCNIDToHandlesMap;
- (void)_handleAddContactChangeHistoryEvent:(id)a0;
- (void)_handleDeleteContactChangeHistoryEvent:(id)a0;
- (void)_handleUpdateContactChangeHistoryEvent:(id)a0;
- (void)_handleDropEverythingChangeHistoryEvent;
- (void)_emptySiblingCacheForIMHandleGUID:(id)a0;
- (void)_buildSiblingsForIMHandle:(id)a0;
- (void)_clearSiblingsCacheForIMHandle:(id)a0 rebuildAfter:(BOOL)a1;
- (void)_addIMHandleToIDToHandlesMap:(id)a0;
- (void)_removeIMHandleToIDToHandlesMap:(id)a0;
- (id)getIDsForAllIMHandles;
- (void)_postContactChangeHistoryEventClientNotifications;
- (id)CNIDToHandlesMap;
- (id)IDToHandlesMap;
- (id)getIDsForInitialBatch;
- (id)getIDsForFinalBatch;
- (void)_dumpOutAllIMHandles;

@end
