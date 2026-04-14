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
- (void)registerIMHandle:(id)a0;
- (void)_handleAddContactChangeHistoryEvent:(id)a0;
- (void)_handleDeleteContactChangeHistoryEvent:(id)a0;
- (void)_handleUpdateContactChangeHistoryEvent:(id)a0;
- (void)_handleDropEverythingChangeHistoryEvent;
- (void)processContactChangeHistoryEventWithHandleIDs:(id)a0 andCNContact:(id)a1;
- (void)_postContactChangeHistoryEventClientNotifications;
- (void)_addressBookChanged;
- (void)_emptySiblingCacheForIMHandleGUID:(id)a0;
- (void)_buildSiblingsForIMHandle:(id)a0;
- (void)_clearSiblingsCacheForIMHandle:(id)a0 rebuildAfter:(BOOL)a1;
- (void)addHandleToCNIDMap:(id)a0 CNContact:(id)a1;
- (id)handlesForCNIdentifier:(id)a0;
- (void)removeHandleFromCNIDMap:(id)a0 withCNID:(id)a1;
- (void)clearCNIDToHandlesMap;
- (id)CNIDToHandlesMap;
- (void)unregisterIMHandle:(id)a0;
- (void)clearSiblingCacheForIMHandle:(id)a0;
- (id)siblingsForIMHandle:(id)a0;
- (void)_addIMHandleToIDToHandlesMap:(id)a0;
- (void)_removeIMHandleToIDToHandlesMap:(id)a0;
- (id)IDToHandlesMap;
- (id)allIMHandles;
- (id)getIMHandlesForID:(id)a0;
- (id)getIDsForInitialBatch;
- (id)getIDsForFinalBatch;
- (id)getIDsForAllIMHandles;
- (void)_dumpOutAllIMHandles;
- (void)_dumpOutAllIMHandlesForAccount:(id)a0;
- (id)_accountSiblingsForHandle:(id)a0;
- (id)_existingAccountSiblingsForHandle:(id)a0;
- (id)_chatSiblingsForHandle:(id)a0;
- (id)_existingChatSiblingsForHandle:(id)a0;

@end
