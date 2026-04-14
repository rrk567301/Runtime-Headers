@class NSString, CCSpotlightUniformTypeSupertypesRepeatedEnum, NSArray;

@interface CCSpotlightUniformType : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned int typeIdentifier;
@property (readonly, nonatomic) NSString *preferredFilenameExtension;
@property (readonly, nonatomic) NSString *preferredMimeType;
@property (readonly, nonatomic) BOOL isDeclared;
@property (nonatomic) BOOL hasIsDeclared;
@property (readonly, nonatomic) BOOL isDynamic;
@property (nonatomic) BOOL hasIsDynamic;
@property (readonly, nonatomic) BOOL isPublic;
@property (nonatomic) BOOL hasIsPublic;
@property (readonly, nonatomic) NSString *referenceUrl;
@property (readonly, nonatomic) int version;
@property (nonatomic) BOOL hasVersion;
@property (readonly, nonatomic) CCSpotlightUniformTypeSupertypesRepeatedEnum *supertypes;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSArray *tags;

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
- (id)initWithIdentifier:(id)a0 typeIdentifier:(unsigned int)a1 preferredFilenameExtension:(id)a2 preferredMimeType:(id)a3 isDeclared:(id)a4 isDynamic:(id)a5 isPublic:(id)a6 referenceUrl:(id)a7 version:(id)a8 supertypes:(id)a9 localizedDescription:(id)a10 tags:(id)a11 error:(id *)a12;

@end
