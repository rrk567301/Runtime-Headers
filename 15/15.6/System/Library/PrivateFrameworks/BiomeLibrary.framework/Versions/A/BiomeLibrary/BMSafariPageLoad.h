@class NSString, NSDate;

@interface BMSafariPageLoad : BMEventBase <BMStoreData> {
    char _hasRaw_visited;
    double _raw_visited;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) char search;
@property (nonatomic) char hasSearch;
@property (readonly, nonatomic) NSDate *visited;
@property (readonly, nonatomic) char mode;
@property (nonatomic) char hasMode;
@property (readonly, nonatomic) int platform;
@property (readonly, nonatomic) int userAgent;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) int entryPoint;
@property (readonly, nonatomic) char actualized;
@property (nonatomic) char hasActualized;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithSearch:(id)a0 visited:(id)a1 mode:(id)a2 platform:(int)a3 userAgent:(int)a4 countryCode:(id)a5 entryPoint:(int)a6 actualized:(id)a7;
- (id)initByReadFrom:(id)a0;

@end
