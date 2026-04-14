@class NSMutableDictionary;

@interface SMDBEntry : NSObject <NSCopying, NSCoding> {
    NSMutableDictionary *dictionaryRepresentation;
}

+ (id)nativeKeyForDSKey:(id)a0;
+ (id)DSKeyForNativeKey:(id)a0;
+ (id)DSRecordTypeForNativeRecordType:(id)a0;
+ (id)nativeRecordTypeForDSRecordType:(id)a0;

- (id)name;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (id)attributes;
- (id)dictionaryRepresentation;
- (id)dataForKey:(id)a0;
- (id)metaDataForKey:(id)a0;
- (id)convertEntry:(id)a0 toClass:(Class)a1;
- (void)convertRecordDictionary:(id)a0 fromClass:(Class)a1;
- (void)deleteKey:(id)a0 forMetaType:(BOOL)a1;
- (void)setArray:(id)a0 forKey:(id)a1 forMetaType:(BOOL)a2;
- (void)replaceValue:(id)a0 withNewValue:(id)a1;
- (void)_setDictionaryRep:(id)a0;

@end
