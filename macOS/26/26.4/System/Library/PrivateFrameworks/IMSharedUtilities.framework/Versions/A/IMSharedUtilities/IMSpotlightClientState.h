@class NSString, NSDate;

@interface IMSpotlightClientState : NSObject <NSCoding, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long initialReindexRowID;
@property (nonatomic) long long indexRevision;
@property (nonatomic) unsigned long long initialTotalMessages;
@property (nonatomic) unsigned long long initialTotalChats;
@property (retain, nonatomic) NSDate *indexBeginDate;
@property (retain, nonatomic) NSString *previousTransactionID;
@property (readonly, nonatomic) unsigned long long migrationRequirements;
@property (readonly, nonatomic) unsigned long long migrationLaneRequirement;
@property (readonly, nonatomic) BOOL needsReindex;
@property (readonly, nonatomic) BOOL needsIndexDrop;

+ (long long)_latestIndexRevision;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)dataWithError:(id *)a0;
- (id)initWithMaxRowID:(unsigned long long)a0 totalMessages:(unsigned long long)a1;
- (id)_initWithInitialReindexRowID:(unsigned long long)a0 indexRevision:(long long)a1 initialTotalMessages:(long long)a2 indexingBeganDate:(id)a3 initialTotalChats:(long long)a4 previousTransactionID:(id)a5;

@end
