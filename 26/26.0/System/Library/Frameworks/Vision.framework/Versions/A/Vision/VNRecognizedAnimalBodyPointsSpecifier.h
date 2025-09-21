@class NSArray;

@interface VNRecognizedAnimalBodyPointsSpecifier : VNRecognizedPointsSpecifier {
    NSArray *_orderedAnimalKeypoints;
}

+ (BOOL)supportsSecureCoding;
+ (id)_stringRepresentationForRequestRevision:(unsigned long long)a0 petsKeypointType:(int)a1 error:(id *)a2;
+ (id)supportedAnimalPoseKeypointsRev1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)availableGroupKeys;
- (id)initWithVCPPetsObservation:(id)a0 originatingRequestSpecifier:(id)a1;
- (id)pointKeyGroupLabelsMapping;

@end
