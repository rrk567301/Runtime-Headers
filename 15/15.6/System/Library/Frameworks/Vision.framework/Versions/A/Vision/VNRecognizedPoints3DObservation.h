@class NSArray, VNRecognizedPoints3DSpecifier;

@interface VNRecognizedPoints3DObservation : VNObservation {
    VNRecognizedPoints3DSpecifier *_specifier;
}

@property (readonly, nonatomic) VNRecognizedPoints3DSpecifier *recognizedPointsSpecifier;
@property (readonly, copy) NSArray *availableKeys;
@property (readonly, copy) NSArray *availableGroupKeys;

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)groupIdentifier;
- (id)initWithOriginatingRequestSpecifier:(id)a0 keypointsReturningObject:(id)a1;
- (id)recognizedPointForKey:(id)a0 error:(id *)a1;
- (id)recognizedPointsForGroupKey:(id)a0 error:(id *)a1;
- (id)vn_cloneObject;

@end
