@class NSString, NSDate;

@interface CCWalletPaymentsCommerceTrackedOrderMerchant : CCItemMessage {
    BOOL _hasRaw_displayNameUpdateDate;
    double _raw_displayNameUpdateDate;
}

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *domainName;
@property (readonly, nonatomic) NSDate *displayNameUpdateDate;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)displayNameUpdateDate;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithDisplayName:(id)a0 domainName:(id)a1 displayNameUpdateDate:(id)a2 error:(id *)a3;
- (id)initWithDisplayName:(id)a0 domainName:(id)a1 error:(id *)a2;

@end
