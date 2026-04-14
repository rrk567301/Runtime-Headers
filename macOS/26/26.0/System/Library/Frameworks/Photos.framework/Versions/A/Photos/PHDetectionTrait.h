@class NSString;

@interface PHDetectionTrait : NSObject

@property (readonly, nonatomic) short type;
@property (readonly, nonatomic) short value;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) NSString *thumbnailIdentifier;

+ (id)detectionTraitsByFaceLocalIdentifierForFaceUUIDs:(id)a0 photoLibrary:(id)a1;
+ (id)detectionTraitsByFaceLocalIdentifierForFaceUUIDs:(id)a0 photoLibrary:(id)a1 withDetectionTraitTypes:(id)a2;
+ (id)detectionTraitsByFaceLocalIdentifierForFaces:(id)a0;
+ (id)detectionTraitsByFaceLocalIdentifierForFaces:(id)a0 withDetectionTraitTypes:(id)a1;
+ (id)detectionTraitsForDetection:(id)a0;

- (id)initWithPropertyListRepresentation:(id)a0;
- (id)propertyListRepresentation;
- (void).cxx_destruct;
- (id)initWithType:(short)a0 value:(short)a1 score:(double)a2 startTime:(double)a3 duration:(double)a4;
- (id)initWithType:(short)a0 value:(short)a1 score:(double)a2 startTime:(double)a3 duration:(double)a4 thumbnailIdentifier:(id)a5;

@end
