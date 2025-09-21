@class NSString;

@interface SCRCUserDefaultsProxy : SCRCUserDefaultsBase {
    NSString *_prefix;
    NSString *_name;
    NSString *_key;
    NSString *_domain;
    NSString *_pdomain;
    BOOL _dirty;
    BOOL _profilable;
    id _data;
    long long _prefixLength;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)removeAllValues;
- (id)allKeys;
- (id)valueForKey:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)dictionaryWithValuesForKeys:(id)a0;
- (id)_longKeyForShortKey:(id)a0;
- (id)_shortKeyForLongKey:(id)a0;
- (id)exclusiveValueForKey:(id)a0;

@end
