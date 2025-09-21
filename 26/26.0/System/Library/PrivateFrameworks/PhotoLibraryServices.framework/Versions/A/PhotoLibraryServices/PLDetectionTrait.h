@class NSString, PLDetectedFace;

@interface PLDetectionTrait : PLManagedObject

@property (nonatomic) short type;
@property (nonatomic) short value;
@property (nonatomic) double score;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *thumbnailIdentifier;
@property (retain, nonatomic) PLDetectedFace *detection;

+ (id)entityName;
+ (id)fetchDetectionTraitByFaceUUIDWithFaceUUIDs:(id)a0 library:(id)a1 error:(id *)a2;
+ (id)insertIntoManagedObjectContext:(id)a0 type:(short)a1 value:(short)a2 score:(double)a3 startTime:(double)a4 duration:(double)a5 thumbnailIdentifier:(id)a6;
+ (BOOL)isPetDetectionType:(short)a0;

- (void)willSave;
- (id)debugLogDescription;
- (void)_touchPersonForPersistenceIfNeeded;

@end
