@interface CADIndexState : NSObject

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) BOOL isReindexing;
@property (readonly, nonatomic) int reindexingEventsDatabaseID;
@property (readonly, nonatomic) long long reindexingEventsLastProcessedRowID;
@property (readonly, nonatomic) BOOL reindexingCalendarsDeleteBeforeIndexing;

+ (id)fullReindexState;
+ (id)incrementalState;
+ (id)reindexingCalendarsStateWithDeleteBeforeIndexing:(BOOL)a0;
+ (id)reindexingEventsStateWithDatabase:(int)a0 lastProcessedRowID:(long long)a1;

- (id)serializedData;
- (id)initWithData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)redactedDescription;
- (id)initWithState:(unsigned long long)a0 databaseID:(int)a1 lastProcessedRowID:(long long)a2 deleteBeforeIndexing:(BOOL)a3;

@end
