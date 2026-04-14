@class NSString;

@interface BMSiriExplicitRequestsLocation : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double latitude;
@property (nonatomic) BOOL hasLatitude;
@property (readonly, nonatomic) double longitude;
@property (nonatomic) BOOL hasLongitude;
@property (readonly, nonatomic) NSString *street;
@property (readonly, nonatomic) NSString *city;
@property (readonly, nonatomic) NSString *state;
@property (readonly, nonatomic) NSString *country;
@property (readonly, nonatomic) NSString *postalCode;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSString *subAdministrativeArea;
@property (readonly, nonatomic) NSString *subLocality;
@property (readonly, nonatomic) NSString *postalAddress;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithLatitude:(id)a0 longitude:(id)a1 street:(id)a2 city:(id)a3 state:(id)a4 country:(id)a5 postalCode:(id)a6 countryCode:(id)a7 subAdministrativeArea:(id)a8 subLocality:(id)a9 postalAddress:(id)a10;

@end
