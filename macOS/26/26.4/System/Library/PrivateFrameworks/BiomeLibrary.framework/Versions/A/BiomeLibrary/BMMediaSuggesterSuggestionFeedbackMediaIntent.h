@class NSString;

@interface BMMediaSuggesterSuggestionFeedbackMediaIntent : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double eventTimestamp;
@property (nonatomic) BOOL hasEventTimestamp;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *intentIdentifier;
@property (readonly, nonatomic) int subtype;
@property (readonly, nonatomic) int engagementType;
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
- (id)initWithEventTimestamp:(id)a0 bundleID:(id)a1 intentIdentifier:(id)a2 subtype:(int)a3;
- (id)initWithEventTimestamp:(id)a0 bundleID:(id)a1 intentIdentifier:(id)a2 subtype:(int)a3 engagementType:(int)a4;

@end
