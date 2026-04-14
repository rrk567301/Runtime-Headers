@class NSString;

@interface CCToolKitToolRestrictionContextMeasurementExpressibleAs : CCItemMessage {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _decodeLock;
    BOOL _lazyDecoding;
    BOOL _isDecoded;
}

@property (readonly, nonatomic) NSString *unit;
@property (readonly, nonatomic) BOOL unitAdjustForLocale;
@property (nonatomic) BOOL hasUnitAdjustForLocale;
@property (readonly, nonatomic) BOOL supportsNegativeNumbers;
@property (nonatomic) BOOL hasSupportsNegativeNumbers;

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
- (id)initWithUnit:(id)a0 unitAdjustForLocale:(id)a1 supportsNegativeNumbers:(id)a2 error:(id *)a3;

@end
