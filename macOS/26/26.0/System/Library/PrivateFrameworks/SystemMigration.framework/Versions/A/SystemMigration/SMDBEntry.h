@class NSMutableDictionary;

@interface SMDBEntry : NSObject <NSCopying, NSCoding> {
    NSMutableDictionary *dictionaryRepresentation;
}

+ (id)DSKeyForNativeKey:(id)a0;
+ (id)DSRecordTypeForNativeRecordType:(id)a0;
+ (id)nativeKeyForDSKey:(id)a0;
+ (id)nativeRecordTypeForDSRecordType:(id)a0;

- (id)metaDataForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dataForKey:(id)a0;
- (id)dictionaryRepresentation;
- (void)setName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)name;
- (id)initWithCoder:(id)a0;
- (id)attributes;
- (void).cxx_destruct;
- (void)_setDictionaryRep:(id)a0;
- (id)convertEntry:(id)a0 toClass:(Class)a1;
- (void)convertRecordDictionary:(id)a0 fromClass:(Class)a1;
- (void)deleteKey:(id)a0 forMetaType:(BOOL)a1;
- (void)replaceValue:(id)a0 withNewValue:(id)a1;
- (void)setArray:(id)a0 forKey:(id)a1 forMetaType:(BOOL)a2;

@end
