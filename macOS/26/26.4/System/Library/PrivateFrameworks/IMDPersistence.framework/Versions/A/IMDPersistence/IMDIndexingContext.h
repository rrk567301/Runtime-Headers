@class NSNumber, NSArray;

@interface IMDIndexingContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long cachedEffectiveMigrationRequirements;
@property (nonatomic) unsigned long long migrationRequirements;
@property (nonatomic) BOOL preflight;
@property (nonatomic) BOOL ignoreRejections;
@property (nonatomic) BOOL ignoreThrottle;
@property (nonatomic) BOOL forceDeferral;
@property (retain, nonatomic) NSNumber *laneOverride;
@property (nonatomic) BOOL needsPriorityCheck;
@property (retain, nonatomic) NSArray *additionalReasons;
@property (readonly, nonatomic) unsigned long long effectiveMigrationRequirements;
@property (readonly, nonatomic) BOOL indexesTextContent;
@property (readonly, nonatomic) BOOL reindexesFullMessages;
@property (readonly, nonatomic) BOOL mayUpdateUI;
@property (nonatomic, getter=isReindexing) BOOL reindexing;
@property (nonatomic) long long reason;
@property (readonly, nonatomic) BOOL runningViaBGST;
@property (retain, nonatomic) NSNumber *bgstLane;

+ (id)contextWithReason:(long long)a0;
+ (id)debuggingDictionaryFromDictionaryRepresentation:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_hasMigrationRequirement:(unsigned long long)a0;
- (id)_initForReindexing:(BOOL)a0 reason:(long long)a1 bgstLane:(id)a2 migrationRequirements:(unsigned long long)a3 preflight:(BOOL)a4 ignoreRejections:(BOOL)a5 ignoreThrottle:(BOOL)a6 forceDeferral:(BOOL)a7 laneOverride:(id)a8 needsPriorityCheck:(BOOL)a9 additionalReasons:(id)a10;
- (void)_recalculateEffectiveMigrationRequirements;
- (id)initForReindexing:(BOOL)a0 reason:(long long)a1;
- (id)initForReindexing:(BOOL)a0 reason:(long long)a1 bgstLane:(id)a2;
- (id)initForReindexing:(BOOL)a0 reason:(long long)a1 bgstLane:(id)a2 userInfo:(id)a3;
- (BOOL)runningViaBGST;

@end
