@class CCToolKitToolComparisonPredicateComparisonTemplate, NSString, CCToolKitToolTypeDefinitionVersion1EntityProperty, CCToolKitToolContentItemClassDescriptor;

@interface CCToolKitToolComparisonPredicateTemplate : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) CCToolKitToolTypeDefinitionVersion1EntityProperty *property;
@property (readonly, nonatomic) CCToolKitToolComparisonPredicateComparisonTemplate *comparisonTemplate;
@property (readonly, nonatomic) NSString *rawGroupId;
@property (readonly, nonatomic) CCToolKitToolContentItemClassDescriptor *contentItemClass;

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
- (id)initWithProperty:(id)a0 comparisonTemplate:(id)a1 rawGroupId:(id)a2 contentItemClass:(id)a3 error:(id *)a4;

@end
