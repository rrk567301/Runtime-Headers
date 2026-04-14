@class NSMutableDictionary;

@interface KGDatabaseNameCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _loaded;
    NSMutableDictionary *_labelIdByName;
    NSMutableDictionary *_labelNameById;
    NSMutableDictionary *_attrIdByPropertyName;
    NSMutableDictionary *_propertyNameByAttrId;
    unsigned long long _highestLabelId;
    unsigned long long _highestAttrId;
    unsigned long long _useCount;
    BOOL _readOnly;
    BOOL _isInTransaction;
    BOOL _loadedInThisTransaction;
    BOOL _clearNeeded;
}

- (void)unloadCache;
- (id)init;
- (void)transactionBegin;
- (void)_addPropertyName:(id)a0 identifier:(id)a1 database:(id)a2;
- (void)setInvalid;
- (void).cxx_destruct;
- (id)reportLabelNamesByIdentifier;
- (id)reportLabelIdentifiersByName;
- (void)internal_unloadCache;
- (void)_addLabelName:(id)a0 identifier:(id)a1 database:(id)a2;
- (id)attrIdentifierForPropertyName:(id)a0 database:(id)a1 updating:(BOOL)a2 error:(id *)a3;
- (void)transactionEnd;
- (void)setWritable;
- (void)_loadCacheIfNeeded:(id)a0;
- (id)labelIdentifierForName:(id)a0 database:(id)a1 updating:(BOOL)a2 error:(id *)a3;
- (id)propertyNameForIdentifier:(id)a0 database:(id)a1;
- (id)labelNameForIdentifier:(id)a0 database:(id)a1;

@end
