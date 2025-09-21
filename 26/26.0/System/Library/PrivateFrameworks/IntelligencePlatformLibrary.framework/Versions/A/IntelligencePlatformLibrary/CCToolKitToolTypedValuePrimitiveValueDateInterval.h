@class CCToolKitToolTimestamp;

@interface CCToolKitToolTypedValuePrimitiveValueDateInterval : CCItemMessage

@property (readonly, nonatomic) CCToolKitToolTimestamp *start;
@property (readonly, nonatomic) CCToolKitToolTimestamp *end;
@property (readonly, nonatomic) double duration;
@property (nonatomic) BOOL hasDuration;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithStart:(id)a0 end:(id)a1 duration:(id)a2 error:(id *)a3;

@end
