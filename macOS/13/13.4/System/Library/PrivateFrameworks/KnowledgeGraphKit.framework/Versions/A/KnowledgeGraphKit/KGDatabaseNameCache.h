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
- (id)labelNameByIdentifier:(id)a0 database:(id)a1;
- (id)labelIdentifierByName:(id)a0 database:(id)a1;
- (void)_addLabelName:(id)a0 identifier:(id)a1;
- (void)_addPropertyName:(id)a0 identifier:(id)a1;
- (void)_loadCacheIfNeeded:(id)a0;
- (void)addLabelName:(id)a0 identifier:(id)a1 database:(id)a2;
- (void)addPropertyName:(id)a0 identifier:(id)a1 database:(id)a2;
- (id)attrIdentifierByPropertyName:(id)a0 database:(id)a1;
- (id)propertyNameByIdentifier:(id)a0 database:(id)a1;
- (BOOL)releaseCache;
- (void)retainCache;
- (void)unloadCache;

@end
