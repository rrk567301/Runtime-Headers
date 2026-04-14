@class NSString;

@interface BMMLSEShareSheetMetricsSystemResourceUsage : BMEventBase <BMStoreData>

@property (readonly, nonatomic) double duration;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) int user_type;
@property (readonly, nonatomic) BOOL timeout_occured;
@property (nonatomic) BOOL hasTimeout_occured;
@property (readonly, nonatomic) long long identifier;
@property (nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) NSString *subidentifier;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithDuration:(id)a0 user_type:(int)a1 timeout_occured:(id)a2 identifier:(id)a3 subidentifier:(id)a4;

@end
