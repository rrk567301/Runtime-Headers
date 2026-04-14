@class NSString, NSDictionary, NSArray, NSUUID, NSObject;
@protocol NSSecureCoding, NSCopying;

@interface NWPVar : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *label;
@property (nonatomic) unsigned long long model;
@property (nonatomic) unsigned long long pullCount;
@property (retain, nonatomic) NSDictionary *allState;
@property (retain, nonatomic) NSArray *referenceValues;
@property (retain, nonatomic) NSObject<NSSecureCoding, NSCopying> *firstValue;
@property (retain, nonatomic) NSObject<NSSecureCoding, NSCopying> *expectingRewardOn;
@property (nonatomic) unsigned long long logicalClock;
@property (retain, nonatomic) NSUUID *durableId;
@property (nonatomic) BOOL useScalarRange;
@property (copy, nonatomic) NSString *exportLabel;
@property (retain, nonatomic) NSDictionary *hyperParams;

+ (void)setBackingStore:(id)a0;
+ (id)_serviceQueue;
+ (id)_backgroundQueue;
+ (id)_defaultBackingStore;
+ (id)_fetchCheckpoint:(id)a0 isPrefix:(BOOL)a1;
+ (void)_setCustomBackingStore:(id)a0;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)setInitialValue:(id)a0;
- (id)checkpoint;
- (id)initInValueSpace:(id)a0 withLabel:(id)a1;
- (id)initFromCheckpoint:(id)a0 forLabel:(id)a1;
- (id)initFromLastCheckpointForLabel:(id)a0;
- (id)_initToCopy;
- (BOOL)selectModel:(unsigned long long)a0;
- (id)predictValueGivenContext:(id)a0 generationId:(id *)a1;
- (BOOL)setReward:(float)a0 onValue:(id)a1 forPredictionGenerationId:(id)a2;
- (void)_mirrorFrom:(id)a0;
- (void)_setToCleanSlate;
- (long long)_pruneOldCheckpoints;
- (id)migrateToValueSpace:(id)a0;
- (id)_pullCounts;

@end
