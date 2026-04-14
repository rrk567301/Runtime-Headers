@class NSObject, NSMutableArray, NSHashTable;
@protocol OS_os_log;

@interface _UXSettingsGroup : _UXSettings <NSFastEnumeration> {
    NSMutableArray *_internal_group;
    NSHashTable *_internal_groupObservers;
    NSObject<OS_os_log> *_log;
}

- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (id)archiveDictionary;
- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (BOOL)_hasObservers;
- (void)setValuesFromModel:(id)a0;
- (void)addSettings:(id)a0;
- (id)settingsAtIndex:(unsigned long long)a0;
- (id)_startInit;
- (void)_continueInitBySettingDefaultValues;
- (void)_completeInitByApplyingArchiveDictionary:(id)a0;
- (void)_stopObservingPropertiesAndChildren;
- (void)_addInternalEntriesToArchiveDictionary:(id)a0;
- (void)_startObservingPropertiesAndChildren;
- (void)addGroupObserver:(id)a0;
- (void)removeGroupObserver:(id)a0;
- (unsigned long long)indexOfSettings:(id)a0;
- (void)insertSettings:(id)a0 atIndex:(unsigned long long)a1;
- (void)_sendInsert:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeSettingsAtIndex:(unsigned long long)a0;
- (void)_sendRemove:(id)a0 atIndex:(unsigned long long)a1;
- (void)moveSettingsAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)_sendMove:(id)a0 fromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;
- (BOOL)containsSettings:(id)a0;
- (void)removeSettings:(id)a0;
- (void)moveSettings:(id)a0 toIndex:(unsigned long long)a1;
- (void)enumerateSettingsUsingBlock:(id /* block */)a0;

@end
