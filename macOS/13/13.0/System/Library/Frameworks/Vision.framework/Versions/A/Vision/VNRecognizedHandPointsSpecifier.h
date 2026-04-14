@class NSArray;

@interface VNRecognizedHandPointsSpecifier : VNRecognizedPointsSpecifier {
    NSArray *_orderedHandKeypoints;
    long long _chirality;
}

@property (readonly) long long chirality;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)availableGroupKeys;
- (id)pointKeyGroupLabelsMapping;
- (id)populatedMLMultiArrayAndReturnError:(id *)a0;
- (id)initWithVCPHandObservation:(id)a0 originatingRequestSpecifier:(id)a1;

@end
