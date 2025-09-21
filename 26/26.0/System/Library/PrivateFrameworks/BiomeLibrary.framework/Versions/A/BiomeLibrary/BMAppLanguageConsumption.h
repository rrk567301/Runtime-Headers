@class NSString;

@interface BMAppLanguageConsumption : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int dataSource;
@property (readonly, nonatomic) NSString *adamID;
@property (readonly, nonatomic) NSString *contentLanguage;
@property (readonly, nonatomic) NSString *contentGenre;
@property (readonly, nonatomic) unsigned int timeSpent;
@property (nonatomic) BOOL hasTimeSpent;
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
- (id)initWithDataSource:(int)a0 adamID:(id)a1 contentLanguage:(id)a2 contentGenre:(id)a3 timeSpent:(id)a4;

@end
