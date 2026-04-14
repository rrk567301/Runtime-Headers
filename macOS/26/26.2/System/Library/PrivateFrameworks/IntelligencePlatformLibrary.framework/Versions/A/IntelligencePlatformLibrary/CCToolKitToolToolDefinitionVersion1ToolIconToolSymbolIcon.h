@class NSString;

@interface CCToolKitToolToolDefinitionVersion1ToolIconToolSymbolIcon : CCItemMessage

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int style;
@property (readonly, nonatomic) NSString *foreground;
@property (readonly, nonatomic) NSString *background;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 style:(unsigned int)a1 foreground:(id)a2 background:(id)a3 error:(id *)a4;

@end
