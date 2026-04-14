@interface CCToolKitToolRestrictionContextTextTypedWith : CCItemMessage

@property (readonly, nonatomic) BOOL multilineAllowed;
@property (nonatomic) BOOL hasMultilineAllowed;
@property (readonly, nonatomic) BOOL smartQuotesEnabled;
@property (nonatomic) BOOL hasSmartQuotesEnabled;
@property (readonly, nonatomic) BOOL smartDashesEnabled;
@property (nonatomic) BOOL hasSmartDashesEnabled;
@property (readonly, nonatomic) unsigned int keyboardType;
@property (readonly, nonatomic) unsigned int autocorrectionType;
@property (readonly, nonatomic) unsigned int capitalizationType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithMultilineAllowed:(id)a0 smartQuotesEnabled:(id)a1 smartDashesEnabled:(id)a2 keyboardType:(unsigned int)a3 autocorrectionType:(unsigned int)a4 capitalizationType:(unsigned int)a5 error:(id *)a6;

@end
