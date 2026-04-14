@class NSArray, NSString, BMDeviceConnectivityContextAppBBcontext, BMDeviceConnectivityContextCellIContext;

@interface BMDeviceConnectivityContext : BMEventBase <BMStoreData>

@property (readonly, nonatomic) int apptype;
@property (readonly, nonatomic) int rat;
@property (readonly, nonatomic) int rrc;
@property (readonly, nonatomic) BMDeviceConnectivityContextCellIContext *servingCell;
@property (readonly, nonatomic) NSArray *neighborCells;
@property (readonly, nonatomic) BMDeviceConnectivityContextAppBBcontext *appBbContext;
@property (readonly, nonatomic) NSString *geohash;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;
+ (unsigned int)latestDataVersion;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)_neighborCellsJSONArray;
- (id)initWithApptype:(int)a0 rat:(int)a1 rrc:(int)a2 servingCell:(id)a3 neighborCells:(id)a4 appBbContext:(id)a5 geohash:(id)a6;

@end
