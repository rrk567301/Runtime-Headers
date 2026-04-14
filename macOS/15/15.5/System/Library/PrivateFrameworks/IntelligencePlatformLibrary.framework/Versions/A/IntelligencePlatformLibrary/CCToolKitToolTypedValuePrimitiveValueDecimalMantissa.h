@interface CCToolKitToolTypedValuePrimitiveValueDecimalMantissa : CCItemMessage

@property (readonly, nonatomic) unsigned int _0;
@property (nonatomic) BOOL has_0;
@property (readonly, nonatomic) unsigned int _1;
@property (nonatomic) BOOL has_1;
@property (readonly, nonatomic) unsigned int _2;
@property (nonatomic) BOOL has_2;
@property (readonly, nonatomic) unsigned int _3;
@property (nonatomic) BOOL has_3;
@property (readonly, nonatomic) unsigned int _4;
@property (nonatomic) BOOL has_4;
@property (readonly, nonatomic) unsigned int _5;
@property (nonatomic) BOOL has_5;
@property (readonly, nonatomic) unsigned int _6;
@property (nonatomic) BOOL has_6;
@property (readonly, nonatomic) unsigned int _7;
@property (nonatomic) BOOL has_7;
@property (readonly, nonatomic) unsigned int x_0Type;
@property (readonly, nonatomic) unsigned int x_1Type;
@property (readonly, nonatomic) unsigned int x_2Type;
@property (readonly, nonatomic) unsigned int x_3Type;
@property (readonly, nonatomic) unsigned int x_4Type;
@property (readonly, nonatomic) unsigned int x_5Type;
@property (readonly, nonatomic) unsigned int x_6Type;
@property (readonly, nonatomic) unsigned int x_7Type;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithX_0:(id)a0 x_0Type:(unsigned int)a1 x_1:(id)a2 x_1Type:(unsigned int)a3 x_2:(id)a4 x_2Type:(unsigned int)a5 x_3:(id)a6 x_3Type:(unsigned int)a7 x_4:(id)a8 x_4Type:(unsigned int)a9 x_5:(id)a10 x_5Type:(unsigned int)a11 x_6:(id)a12 x_6Type:(unsigned int)a13 x_7:(id)a14 x_7Type:(unsigned int)a15 error:(id *)a16;

@end
