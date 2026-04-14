@class NSString;

@interface CCSpotlightCustomItemAttributeValue : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) long long intValue;
@property (nonatomic) BOOL hasIntValue;
@property (readonly, nonatomic) double doubleValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (readonly, nonatomic) BOOL boolValue;
@property (nonatomic) BOOL hasBoolValue;
@property (readonly, nonatomic) unsigned int valueType;

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
- (id)initWithValue:(id)a0 valueType:(unsigned int)a1 error:(id *)a2;

@end
