@interface CCToolKitToolRuntimePlatformVersion : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) int major;
@property (nonatomic) BOOL hasMajor;
@property (readonly, nonatomic) int minor;
@property (nonatomic) BOOL hasMinor;
@property (readonly, nonatomic) int patch;
@property (nonatomic) BOOL hasPatch;
@property (readonly, nonatomic) BOOL isWildcard;
@property (nonatomic) BOOL hasIsWildcard;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;
+ (unsigned short)typeIdentifierForDescription:(id)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)jsonDictionary;
- (BOOL)decodeFieldValuesFromData:(id)a0 error:(id *)a1;
- (BOOL)ensureDecodedWithError:(id *)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (id)initLazyDecodedWithTrustedItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithItemMessageData:(id)a0 error:(id *)a1;
- (id)initWithMajor:(id)a0 minor:(id)a1 patch:(id)a2 isWildcard:(id)a3 error:(id *)a4;

@end
