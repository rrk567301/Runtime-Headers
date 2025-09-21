@class NSString, HDCodableSample, HDCodableVerifiableData;

@interface HDCodableVisionSample : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char leftAddPower : 1; unsigned char leftAxis : 1; unsigned char leftBaseCurve : 1; unsigned char leftContactDiameter : 1; unsigned char leftCylinder : 1; unsigned char leftFarPupillaryDistance : 1; unsigned char leftNearPupillaryDistance : 1; unsigned char leftPrismAmount : 1; unsigned char leftPrismAngle : 1; unsigned char leftSphere : 1; unsigned char leftVertexDistance : 1; unsigned char prescriptionType : 1; unsigned char rightAddPower : 1; unsigned char rightAxis : 1; unsigned char rightBaseCurve : 1; unsigned char rightContactDiameter : 1; unsigned char rightCylinder : 1; unsigned char rightFarPupillaryDistance : 1; unsigned char rightNearPupillaryDistance : 1; unsigned char rightPrismAmount : 1; unsigned char rightPrismAngle : 1; unsigned char rightSphere : 1; unsigned char rightVertexDistance : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) char hasPrescriptionType;
@property (nonatomic) long long prescriptionType;
@property (nonatomic) char hasLeftSphere;
@property (nonatomic) double leftSphere;
@property (nonatomic) char hasRightSphere;
@property (nonatomic) double rightSphere;
@property (nonatomic) char hasLeftCylinder;
@property (nonatomic) double leftCylinder;
@property (nonatomic) char hasRightCylinder;
@property (nonatomic) double rightCylinder;
@property (nonatomic) char hasLeftAxis;
@property (nonatomic) double leftAxis;
@property (nonatomic) char hasRightAxis;
@property (nonatomic) double rightAxis;
@property (nonatomic) char hasLeftAddPower;
@property (nonatomic) double leftAddPower;
@property (nonatomic) char hasRightAddPower;
@property (nonatomic) double rightAddPower;
@property (nonatomic) char hasLeftVertexDistance;
@property (nonatomic) double leftVertexDistance;
@property (nonatomic) char hasRightVertexDistance;
@property (nonatomic) double rightVertexDistance;
@property (nonatomic) char hasLeftPrismAmount;
@property (nonatomic) double leftPrismAmount;
@property (nonatomic) char hasRightPrismAmount;
@property (nonatomic) double rightPrismAmount;
@property (nonatomic) char hasLeftPrismAngle;
@property (nonatomic) double leftPrismAngle;
@property (nonatomic) char hasRightPrismAngle;
@property (nonatomic) double rightPrismAngle;
@property (nonatomic) char hasLeftFarPupillaryDistance;
@property (nonatomic) double leftFarPupillaryDistance;
@property (nonatomic) char hasRightFarPupillaryDistance;
@property (nonatomic) double rightFarPupillaryDistance;
@property (nonatomic) char hasLeftNearPupillaryDistance;
@property (nonatomic) double leftNearPupillaryDistance;
@property (nonatomic) char hasRightNearPupillaryDistance;
@property (nonatomic) double rightNearPupillaryDistance;
@property (readonly, nonatomic) char hasGlassesDescription;
@property (retain, nonatomic) NSString *glassesDescription;
@property (nonatomic) char hasLeftBaseCurve;
@property (nonatomic) double leftBaseCurve;
@property (nonatomic) char hasRightBaseCurve;
@property (nonatomic) double rightBaseCurve;
@property (nonatomic) char hasLeftContactDiameter;
@property (nonatomic) double leftContactDiameter;
@property (nonatomic) char hasRightContactDiameter;
@property (nonatomic) double rightContactDiameter;
@property (readonly, nonatomic) char hasBrand;
@property (retain, nonatomic) NSString *brand;
@property (readonly, nonatomic) char hasVerifiableData;
@property (retain, nonatomic) HDCodableVerifiableData *verifiableData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (char)applyToObject:(id)a0;

@end
