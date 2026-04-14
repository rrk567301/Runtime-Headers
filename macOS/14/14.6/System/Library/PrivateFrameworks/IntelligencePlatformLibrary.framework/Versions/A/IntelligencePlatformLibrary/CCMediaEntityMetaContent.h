@class NSArray, NSString;

@interface CCMediaEntityMetaContent : CCItemMessage <CCItemMetaContent>

@property (readonly, nonatomic) NSArray *linkedIdentifiers;
@property (readonly, nonatomic) NSString *sourceItemIdentifier;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithSourceItemIdentifier:(id)a0 linkedIdentifiers:(id)a1 error:(id *)a2;

@end
