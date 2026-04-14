@class NSDate;

@interface IMSpotlightClientState : NSObject <NSCoding, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long lastIndexedRowID;
@property (nonatomic) unsigned long long initialReindexRowID;
@property (nonatomic) long long indexRevision;
@property (nonatomic) long long indexVersion;
@property (nonatomic) unsigned long long initialIndexedMessages;
@property (nonatomic) unsigned long long processedMessageRecords;
@property (nonatomic) unsigned long long initialTotalMessages;
@property (nonatomic) unsigned long long initialTotalChats;
@property (nonatomic) unsigned long long initialIndexedChats;
@property (retain, nonatomic) NSDate *indexBeginDate;
@property (readonly, nonatomic) long long reindexingStyle;
@property (readonly, nonatomic) BOOL needsReindex;
@property (readonly, nonatomic) BOOL needsIndexDrop;

+ (long long)_latestIndexRevision;
+ (long long)_latestIndexVersion;
+ (long long)_reindexingStyle;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dataWithError:(id *)a0;
- (id)initWithMaxRowID:(unsigned long long)a0 totalMessages:(unsigned long long)a1;
- (id)_initWithLastIndexedRowID:(unsigned long long)a0 initialReindexRowID:(unsigned long long)a1 indexRevision:(long long)a2 indexVersion:(long long)a3 initialIndexedMessages:(long long)a4 initialTotalMessages:(long long)a5 processedMessageRecords:(unsigned long long)a6 indexingBeganDate:(id)a7 initialIndexedChats:(long long)a8 initialTotalChats:(long long)a9 reindexingStyle:(long long)a10;

@end
