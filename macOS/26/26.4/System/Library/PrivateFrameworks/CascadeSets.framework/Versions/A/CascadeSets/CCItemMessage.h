@class NSData;

@interface CCItemMessage : NSObject <CCItemFieldEnumerable, NSCopying, CCJSONDescribing> {
    BOOL _hasBeenDecoded;
    BOOL _lazyDecodingEnabled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
}

@property (class, readonly, nonatomic) Class metaContentMessageClass;
@property (class, readonly, nonatomic) Class contentMessageClass;
@property (class, readonly, nonatomic) unsigned short itemType;

@property (readonly, nonatomic) NSData *innerData;

+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (id)contentMessageForItemType:(unsigned short)a0 data:(id)a1 error:(id *)a2;
+ (id)metaContentMessageForItemType:(unsigned short)a0 data:(id)a1 error:(id *)a2;
+ (id)contentMessageForItemType:(unsigned short)a0 jsonDictionary:(id)a1 error:(id *)a2;
+ (id)lazilyDecodedContentMessageForItemType:(unsigned short)a0 trustedItemMessageData:(id)a1 error:(id *)a2;
+ (id)lazilyDecodedMetaContentMessageForItemType:(unsigned short)a0 trustedItemMessageData:(id)a1 error:(id *)a2;
+ (id)metaContentMessageForItemType:(unsigned short)a0 jsonDictionary:(id)a1 error:(id *)a2;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)jsonDict;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)data;
- (id)description;
- (id)itemMessageData;
- (id)_initWithInnerData:(id)a0 error:(id *)a1;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)recursivelyEnumerateFieldsWithError:(id *)a0 forParentField:(id)a1 isRepeatedSubMessage:(BOOL)a2 repeatedSubMessageIndex:(unsigned int)a3 usingBlock:(id /* block */)a4;
- (BOOL)recursivelyEnumerateFieldsWithError:(id *)a0 usingBlock:(id /* block */)a1;

@end
