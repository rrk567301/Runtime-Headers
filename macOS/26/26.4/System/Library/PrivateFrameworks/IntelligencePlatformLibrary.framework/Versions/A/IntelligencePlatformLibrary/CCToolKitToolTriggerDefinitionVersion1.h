@class CCToolKitToolTriggerDefinitionVersion1FlagsRepeatedEnum, NSString, NSArray, CCToolKitToolTypeInstance;

@interface CCToolKitToolTriggerDefinitionVersion1 : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSString *id;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *description;
@property (readonly, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) CCToolKitToolTypeInstance *outputType;
@property (readonly, nonatomic) NSArray *requirements;
@property (readonly, nonatomic) CCToolKitToolTriggerDefinitionVersion1FlagsRepeatedEnum *flags;

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
- (id)initWithId:(id)a0 name:(id)a1 description:(id)a2 parameters:(id)a3 outputType:(id)a4 requirements:(id)a5 flags:(id)a6 error:(id *)a7;

@end
