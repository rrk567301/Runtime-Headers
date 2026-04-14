@class NSString, CCToolKitToolContainerDefinitionDevice, NSArray;

@interface CCToolKitToolContainerDefinition : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *containerId;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) unsigned int containerType;
@property (readonly, nonatomic) NSString *teamId;
@property (readonly, nonatomic) CCToolKitToolContainerDefinitionDevice *device;
@property (readonly, nonatomic) unsigned int origin;
@property (readonly, nonatomic) NSArray *synonyms;

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
- (id)initWithName:(id)a0 containerId:(id)a1 bundleVersion:(id)a2 containerType:(unsigned int)a3 teamId:(id)a4 device:(id)a5 origin:(unsigned int)a6 synonyms:(id)a7 error:(id *)a8;

@end
