@class NSString;

@interface BMInferredLocation : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double latitude;
@property (nonatomic) BOOL hasLatitude;
@property (readonly, nonatomic) double longitude;
@property (nonatomic) BOOL hasLongitude;
@property (readonly, nonatomic) double altitude;
@property (nonatomic) BOOL hasAltitude;
@property (readonly, nonatomic) double horizontalUncertainity;
@property (nonatomic) BOOL hasHorizontalUncertainity;
@property (readonly, nonatomic) double verticalUncertainity;
@property (nonatomic) BOOL hasVerticalUncertainity;
@property (readonly, nonatomic) int locationSourceAccuracy;
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
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithLatitude:(id)a0 longitude:(id)a1 altitude:(id)a2 horizontalUncertainity:(id)a3 verticalUncertainity:(id)a4 locationSourceAccuracy:(int)a5;

@end
