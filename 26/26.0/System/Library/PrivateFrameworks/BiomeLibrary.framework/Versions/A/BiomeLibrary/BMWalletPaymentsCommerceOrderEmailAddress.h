@class NSArray, NSString;

@interface BMWalletPaymentsCommerceOrderEmailAddress : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSArray *addressLines;
@property (readonly, nonatomic) NSString *locality;
@property (readonly, nonatomic) NSString *subLocality;
@property (readonly, nonatomic) NSString *administrativeArea;
@property (readonly, nonatomic) NSString *subAdministrativeArea;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSString *street;
@property (readonly, nonatomic) NSString *city;
@property (readonly, nonatomic) NSString *state;
@property (readonly, nonatomic) NSString *postalCode;
@property (readonly, nonatomic) NSString *country;
@property (readonly, nonatomic) NSString *rawAddress;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_addressLinesJSONArray;
- (id)initWithStreet:(id)a0 city:(id)a1 state:(id)a2 postalCode:(id)a3 country:(id)a4 addressLines:(id)a5 locality:(id)a6 subLocality:(id)a7 administrativeArea:(id)a8 subAdministrativeArea:(id)a9 countryCode:(id)a10 rawAddress:(id)a11;

@end
