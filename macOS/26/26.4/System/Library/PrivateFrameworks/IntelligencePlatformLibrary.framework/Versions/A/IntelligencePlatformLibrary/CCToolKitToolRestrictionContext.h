@class CCToolKitToolRestrictionContextInSet, CCToolKitToolRestrictionContextTextTypedWith, CCToolKitToolRestrictionContextRepresentableAs, CCToolKitToolRestrictionContextInInclusiveRange, CCToolKitToolRestrictionContextMeasurementExpressibleAs;

@interface CCToolKitToolRestrictionContext : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) CCToolKitToolRestrictionContextInSet *inSet;
@property (readonly, nonatomic) CCToolKitToolRestrictionContextRepresentableAs *representableAs;
@property (readonly, nonatomic) unsigned int personReachableAs;
@property (readonly, nonatomic) unsigned int dateExpressibleAs;
@property (readonly, nonatomic) CCToolKitToolRestrictionContextTextTypedWith *textTypedWith;
@property (readonly, nonatomic) CCToolKitToolRestrictionContextMeasurementExpressibleAs *measurementExpressibleAs;
@property (readonly, nonatomic) CCToolKitToolRestrictionContextInInclusiveRange *inInclusiveRange;
@property (readonly, nonatomic) unsigned int kindType;

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
- (id)initWithKind:(id)a0 kindType:(unsigned int)a1 error:(id *)a2;

@end
