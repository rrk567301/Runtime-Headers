@class BMMomentsEngagementSuggestionEvent, BMMomentsEngagementClientActivityEvent, BMMomentsEngagementAppEntryEvent, NSString;

@interface BMMomentsEngagement : BMEventBase <BMStoreData>

@property (readonly, nonatomic) BMMomentsEngagementSuggestionEvent *suggestionEvent;
@property (readonly, nonatomic) BMMomentsEngagementAppEntryEvent *entryEvent;
@property (readonly, nonatomic) BMMomentsEngagementClientActivityEvent *clientActivityEvent;
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
- (id)initWithSuggestionEvent:(id)a0 entryEvent:(id)a1 clientActivityEvent:(id)a2;

@end
