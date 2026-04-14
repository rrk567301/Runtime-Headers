@class NSArray;

@interface VNRecognizedBodyPointsSpecifier : VNRecognizedPointsSpecifier {
    NSArray *_orderedPersonKeypoints;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)availableGroupKeys;
- (id)initWithVCPPersonObservation:(id)a0 originatingRequestSpecifier:(id)a1;
- (id)pointKeyGroupLabelsMapping;
- (id)populatedMLMultiArrayAndReturnError:(id *)a0;

@end
