@class NSString;

@interface BMMailSearchQuery : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *queryString;
@property (readonly, nonatomic) int queryStatus;
@property (readonly, nonatomic) BOOL hasResults;
@property (nonatomic) BOOL hasHasResults;
@property (readonly, nonatomic) int resultView;
@property (readonly, nonatomic) BOOL resultEngaged;
@property (nonatomic) BOOL hasResultEngaged;
@property (readonly, nonatomic) int resultEngagedSectionType;
@property (readonly, nonatomic) int abandonedReason;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSString *regionCode;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;
+ (id)validKeyPaths;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)serialize;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)writeTo:(id)a0;
- (id)initWithQueryString:(id)a0 queryStatus:(int)a1 hasResults:(id)a2 resultView:(int)a3 resultEngaged:(id)a4 resultEngagedSectionType:(int)a5 abandonedReason:(int)a6 languageCode:(id)a7 regionCode:(id)a8;
- (id)initWithQueryString:(id)a0 queryStatus:(int)a1 hasResults:(id)a2 resultView:(int)a3 resultEngaged:(id)a4 resultEngagedSectionType:(int)a5 abandonedReason:(int)a6;

@end
