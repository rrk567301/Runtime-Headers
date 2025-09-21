@class NSString;

@interface BMDeviceEdgeSelection : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *publicIPPrefix;
@property (readonly, nonatomic) unsigned int addressFamily;
@property (nonatomic) BOOL hasAddressFamily;
@property (readonly, nonatomic) unsigned int prefixLength;
@property (nonatomic) BOOL hasPrefixLength;
@property (readonly, nonatomic) NSString *interfaceType;
@property (readonly, nonatomic) NSString *radioType;
@property (readonly, nonatomic) NSString *radioBand;
@property (readonly, nonatomic) NSString *country;
@property (readonly, nonatomic) NSString *timeZone;
@property (readonly, nonatomic) NSString *geohash;
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
- (id)initWithPublicIPPrefix:(id)a0 addressFamily:(id)a1 prefixLength:(id)a2 interfaceType:(id)a3 radioType:(id)a4 radioBand:(id)a5 country:(id)a6 timeZone:(id)a7 geohash:(id)a8;

@end
