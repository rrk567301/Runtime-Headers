@class NSString;

@interface BMSiriRequestContextAddress : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *street;
@property (readonly, nonatomic) NSString *city;
@property (readonly, nonatomic) NSString *state;
@property (readonly, nonatomic) NSString *postalCode;
@property (readonly, nonatomic) NSString *countryCode;
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
- (id)initWithLabel:(id)a0 street:(id)a1 city:(id)a2 state:(id)a3 postalCode:(id)a4 countryCode:(id)a5;

@end
