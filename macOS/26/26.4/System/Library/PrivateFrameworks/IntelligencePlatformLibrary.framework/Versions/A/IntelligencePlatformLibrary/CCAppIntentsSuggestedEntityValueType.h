@class CCAppIntentsSuggestedEntityValueTypeLinkEnumeration, CCAppIntentsSuggestedEntityValueTypeArray, CCAppIntentsSuggestedEntityValueTypeEntity;

@interface CCAppIntentsSuggestedEntityValueType : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) unsigned int containerType;
@property (readonly, nonatomic) CCAppIntentsSuggestedEntityValueTypeArray *array;
@property (readonly, nonatomic) CCAppIntentsSuggestedEntityValueTypeEntity *entity;
@property (readonly, nonatomic) unsigned int legacyIntent;
@property (readonly, nonatomic) CCAppIntentsSuggestedEntityValueTypeLinkEnumeration *linkEnumeration;
@property (readonly, nonatomic) unsigned int measurement;
@property (readonly, nonatomic) unsigned int primitive;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithContainerType:(unsigned int)a0 array:(id)a1 entity:(id)a2 legacyIntent:(unsigned int)a3 linkEnumeration:(id)a4 measurement:(unsigned int)a5 primitive:(unsigned int)a6 error:(id *)a7;

@end
