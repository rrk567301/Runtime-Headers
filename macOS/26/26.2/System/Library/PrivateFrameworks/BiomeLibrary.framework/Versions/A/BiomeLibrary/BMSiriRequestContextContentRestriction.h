@class NSString;

@interface BMSiriRequestContextContentRestriction : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int appRestriction;
@property (nonatomic) BOOL hasAppRestriction;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) int movieRestriction;
@property (nonatomic) BOOL hasMovieRestriction;
@property (readonly, nonatomic) int tvRestriction;
@property (nonatomic) BOOL hasTvRestriction;
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
- (id)initWithAppRestriction:(id)a0 countryCode:(id)a1 movieRestriction:(id)a2 tvRestriction:(id)a3;

@end
