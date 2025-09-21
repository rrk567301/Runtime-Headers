@interface CCTAAAlgorithmData : CCData {
    struct CCTAAAlgorithmDataStruct { BOOL enabled; int technique; int accumulationCurve; int coverageType; int debugView; double constantAccumulationFactor; double maxAccumulationFactor; double accumulationStartRate; double accumulationPlateauRate; double accumulationSlopeModifier; void /* unknown type, empty encoding */ point0; void /* unknown type, empty encoding */ point1; void /* unknown type, empty encoding */ point2; void /* unknown type, empty encoding */ point3; void /* unknown type, empty encoding */ clippedLogisticParams; void /* unknown type, empty encoding */ configurableLogisticParams; BOOL enableTemporalContrastBias; double temporalContrastBiasMultiplier; BOOL enableVarianceClipping; double stdMultiplier; double innerPeripheryOverride; BOOL speedOfLight; double coverage; BOOL occupancyDisabled; } _algorithmData;
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
