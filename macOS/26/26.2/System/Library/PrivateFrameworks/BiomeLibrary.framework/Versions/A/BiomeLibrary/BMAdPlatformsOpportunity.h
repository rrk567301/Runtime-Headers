@class NSString;

@interface BMAdPlatformsOpportunity : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int placement;
@property (readonly, nonatomic) int numAds;
@property (nonatomic) BOOL hasNumAds;
@property (readonly, nonatomic) int numPassed;
@property (nonatomic) BOOL hasNumPassed;
@property (readonly, nonatomic) NSString *storefront;
@property (readonly, nonatomic) NSString *searchTerm;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;

- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)serialize;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithPlacement:(int)a0 numAds:(id)a1 numPassed:(id)a2 storefront:(id)a3 searchTerm:(id)a4;

@end
