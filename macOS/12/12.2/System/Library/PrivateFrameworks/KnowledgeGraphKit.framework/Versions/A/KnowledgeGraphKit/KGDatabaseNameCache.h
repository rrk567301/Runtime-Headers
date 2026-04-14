@class NSMutableDictionary;

@interface KGDatabaseNameCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _loaded;
    NSMutableDictionary *_labelIdByName;
    NSMutableDictionary *_labelNameById;
    NSMutableDictionary *_attrIdByPropertyName;
    NSMutableDictionary *_propertyNameByAttrId;
    unsigned long long _useCount;
}

- (id)init;
- (void).cxx_destruct;
- (void)unloadCache;
- (BOOL)releaseCache;
- (void)retainCache;
- (id)labelIdentifierByName:(id)a0 database:(id)a1;
- (id)labelNameByIdentifier:(id)a0 database:(id)a1;
- (id)attrIdentifierByPropertyName:(id)a0 database:(id)a1;
- (id)propertyNameByIdentifier:(id)a0 database:(id)a1;
- (void)addLabelName:(id)a0 identifier:(id)a1 database:(id)a2;
- (void)addPropertyName:(id)a0 identifier:(id)a1 database:(id)a2;
- (void)_addLabelName:(id)a0 identifier:(id)a1;
- (void)_addPropertyName:(id)a0 identifier:(id)a1;
- (void)_loadCacheIfNeeded:(id)a0;

@end
