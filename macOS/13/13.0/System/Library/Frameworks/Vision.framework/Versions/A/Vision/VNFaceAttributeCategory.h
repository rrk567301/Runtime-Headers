@class NSArray, VNClassificationObservation;

@interface VNFaceAttributeCategory : NSObject <VNObjectCloning, NSSecureCoding, NSCopying, VNRequestRevisionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) VNClassificationObservation *label;
@property (copy, nonatomic) NSArray *allLabelsWithConfidences;
@property (readonly, nonatomic) unsigned long long requestRevision;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)vn_cloneObject;
- (id)initWithRequestRevision:(unsigned long long)a0;
- (void)_computeLabel;

@end
