@class VNObservation;
@protocol NSSecureCoding, VNEntityIdentificationModelObservation, NSCopying, NSObject;

@interface VNEntityIdentificationModelPrediction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) VNObservation<VNEntityIdentificationModelObservation> *observation;
@property (readonly, copy) id<NSObject, NSCopying, NSSecureCoding> entityUniqueIdentifier;
@property (readonly) float confidence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithObservation:(id)a0 entityUniqueIdentifier:(id)a1 confidence:(float)a2;

@end
