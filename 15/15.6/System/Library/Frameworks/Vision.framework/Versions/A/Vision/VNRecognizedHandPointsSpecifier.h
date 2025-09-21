@class NSArray;

@interface VNRecognizedHandPointsSpecifier : VNRecognizedPointsSpecifier {
    NSArray *_orderedHandKeypoints;
    long long _chirality;
}

@property (readonly) long long chirality;

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)availableGroupKeys;
- (id)initWithVCPHandObservation:(id)a0 originatingRequestSpecifier:(id)a1;
- (id)pointKeyGroupLabelsMapping;
- (id)populatedMLMultiArrayAndReturnError:(id *)a0;

@end
