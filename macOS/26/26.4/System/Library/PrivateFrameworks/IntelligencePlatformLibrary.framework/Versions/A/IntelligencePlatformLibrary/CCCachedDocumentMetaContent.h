@class NSUUID, NSString, NSData, NSDate;

@interface CCCachedDocumentMetaContent : CCItemMessage <CCItemMetaContent, CCItemFieldEnumerable, CCJSONDescribing, CCExpirable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
    NSData *_raw_associatedInstanceUUID;
    BOOL _hasRaw_expirationDate;
    double _raw_expirationDate;
}

@property (readonly, nonatomic) NSUUID *associatedInstanceUUID;
@property (readonly, nonatomic) NSString *associatedDomainIdentifier;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) unsigned int documentType;
@property (readonly, nonatomic) NSString *sourceItemIdentifier;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (id)expirationDate;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithSourceItemIdentifier:(id)a0 associatedInstanceUUID:(id)a1 associatedDomainIdentifier:(id)a2 expirationDate:(id)a3 documentType:(unsigned int)a4 error:(id *)a5;
- (id)associatedInstanceUUID;

@end
