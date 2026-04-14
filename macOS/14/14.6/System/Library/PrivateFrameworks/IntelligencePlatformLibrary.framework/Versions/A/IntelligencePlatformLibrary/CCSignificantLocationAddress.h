@class NSString;

@interface CCSignificantLocationAddress : CCItemMessage

@property (readonly, nonatomic) NSString *thoroughfare;
@property (readonly, nonatomic) NSString *subLocality;
@property (readonly, nonatomic) NSString *locality;
@property (readonly, nonatomic) NSString *country;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithThoroughfare:(id)a0 subLocality:(id)a1 locality:(id)a2 country:(id)a3 error:(id *)a4;

@end
