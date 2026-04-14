@class CCToolKitToolRuntimePlatformVersion;

@interface CCToolKitToolRuntimeRequirementAvailabilityAnnotation : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) CCToolKitToolRuntimePlatformVersion *introducingVersion;
@property (readonly, nonatomic) CCToolKitToolRuntimePlatformVersion *deprecatingVersion;
@property (readonly, nonatomic) CCToolKitToolRuntimePlatformVersion *obsoletingVersion;

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
- (id)initWithPlatform:(unsigned int)a0 introducingVersion:(id)a1 deprecatingVersion:(id)a2 obsoletingVersion:(id)a3 error:(id *)a4;

@end
