@class NSString;

@interface CCHomeEntityContent : CCItemMessage <CCItemContent>

@property (readonly, nonatomic) unsigned int entityType;
@property (readonly, nonatomic) unsigned int deviceType;
@property (readonly, nonatomic) NSString *name;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithEntityType:(unsigned int)a0 deviceType:(unsigned int)a1 name:(id)a2 error:(id *)a3;

@end
