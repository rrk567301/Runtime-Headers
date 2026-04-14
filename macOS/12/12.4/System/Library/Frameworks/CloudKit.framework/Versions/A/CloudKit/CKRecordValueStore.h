@class NSString, NSMutableDictionary, NSMutableSet, CKRecord;

@interface CKRecordValueStore : NSObject <CKRecordKeyValueSetting, NSCopying, NSSecureCoding> {
    BOOL _trackChanges;
    CKRecord *_record;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isEncrypted) BOOL encrypted;
@property (retain, nonatomic) NSMutableDictionary *values;
@property (retain, nonatomic) NSMutableDictionary *originalValues;
@property (retain, nonatomic) NSMutableSet *changedKeysSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)valueForKey:(id)a0;
- (void)setNilValueForKey:(id)a0;
- (id)recordID;
- (id)changedKeys;
- (BOOL)checkPropertiesWithModifiedPropertiesOnly:(BOOL)a0 includingAllArrayItems:(BOOL)a1 withValueCheckBlock:(id /* block */)a2;
- (id)initWithRecord:(id)a0;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)_processValue:(id)a0 forKey:(id)a1 shouldSetValue:(BOOL *)a2;
- (void)_setObject:(id)a0 forKey:(id)a1;
- (void)setObjectNoValidate:(id)a0 forKey:(id)a1;
- (void)resetChangedKeys;
- (BOOL)checkProperties:(BOOL)a0 withValueCheckBlock:(id /* block */)a1;

@end
