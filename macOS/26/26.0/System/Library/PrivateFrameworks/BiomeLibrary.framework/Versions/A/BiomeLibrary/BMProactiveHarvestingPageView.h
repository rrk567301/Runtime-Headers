@class NSString, NSDate;

@interface BMProactiveHarvestingPageView : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSString *domainID;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *content;
@property (readonly, nonatomic) BOOL contentIsReaderText;
@property (nonatomic) BOOL hasContentIsReaderText;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) NSString *personaId;
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
- (id)initWithUniqueID:(id)a0 domainID:(id)a1 absoluteTimestamp:(id)a2 title:(id)a3 content:(id)a4 contentIsReaderText:(id)a5 url:(id)a6 contentProtection:(id)a7 personaId:(id)a8;

@end
