@class NSString;

@interface CCToolKitToolToolInvocationOptions : CCItemMessage

@property (readonly, nonatomic) unsigned int interactionMode;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) unsigned int interfaceIdiom;
@property (readonly, nonatomic) BOOL shortcutOutput;
@property (nonatomic) BOOL hasShortcutOutput;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithInteractionMode:(unsigned int)a0 locale:(id)a1 requestIdentifier:(id)a2 interfaceIdiom:(unsigned int)a3 shortcutOutput:(id)a4 error:(id *)a5;

@end
