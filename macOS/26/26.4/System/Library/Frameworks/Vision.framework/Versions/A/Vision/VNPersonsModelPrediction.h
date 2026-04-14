@class VNFaceObservation;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface VNPersonsModelPrediction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) VNFaceObservation *faceObservation;
@property (readonly, copy, nonatomic) id<NSObject, NSCopying, NSSecureCoding> predictedPersonUniqueIdentifier;
@property (readonly, nonatomic) float confidence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithFaceObservation:(id)a0 predictedPersonUniqueIdentifier:(id)a1 confidence:(float)a2;

@end
