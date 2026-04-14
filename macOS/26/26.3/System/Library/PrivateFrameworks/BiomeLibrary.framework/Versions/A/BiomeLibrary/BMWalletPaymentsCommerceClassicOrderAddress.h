@class NSArray, NSString;

@interface BMWalletPaymentsCommerceClassicOrderAddress : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSArray *addressLines;
@property (readonly, nonatomic) NSString *locality;
@property (readonly, nonatomic) NSString *subLocality;
@property (readonly, nonatomic) NSString *administrativeArea;
@property (readonly, nonatomic) NSString *subAdministrativeArea;
@property (readonly, nonatomic) NSString *postalCode;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;
+ (id)validKeyPaths;

- (id)serialize;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initByReadFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)_addressLinesJSONArray;
- (id)initWithAddressLines:(id)a0 locality:(id)a1 subLocality:(id)a2 administrativeArea:(id)a3 subAdministrativeArea:(id)a4 postalCode:(id)a5 countryCode:(id)a6;

@end
