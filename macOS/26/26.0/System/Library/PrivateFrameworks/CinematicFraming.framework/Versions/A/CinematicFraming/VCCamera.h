@class NSData, NSString;

@interface VCCamera : NSObject <NSCopying> {
    struct { void /* unknown type, empty encoding */ sensorSize; void /* unknown type, empty encoding */ principalPoint; float focalLength; float fisheyeFactor; float validImageCircleRadius; struct { void /* unknown type, empty encoding */ columns[4]; } extrinsicMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } inverseExtrinsicMatrix; BOOL hasGeometricDistortionCalibration; float mmFactor; void /* unknown type, empty encoding */ geometricDistortionCenter; struct { float c0; float c2; float c4; float c6; float c8; float c10; float c12; float c14; } forwardGeometricDistortion; struct { float c0; float c2; float c4; float c6; float c8; float c10; float c12; float c14; } inverseGeometricDistortion; float calibrationRadiusDistorted; float calibrationRadiusUndistorted; } _model;
    unsigned int _modelState;
}

@property (readonly, nonatomic) struct { float x0; float x1; float x2; struct { void /* unknown type, empty encoding */ x0[4]; } x3; struct { void /* unknown type, empty encoding */ x0[4]; } x4; BOOL x5; float x6; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x7; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x8; float x9; float x10; } *model;
@property (nonatomic) void /* unknown type, empty encoding */ sensorSize;
@property (nonatomic) void /* unknown type, empty encoding */ principalPoint;
@property (nonatomic) float focalLength;
@property (nonatomic) float fisheyeFactor;
@property (nonatomic) float zoomFactor;
@property (nonatomic) float fov;
@property (nonatomic) float zoomFOV;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } intrinsicMatrix;
@property (nonatomic) void /* unknown type, empty encoding */ rotation;
@property (nonatomic) void /* unknown type, empty encoding */ translation;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } extrinsicMatrix;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } rotationMatrix;
@property (nonatomic) BOOL hasGeometricDistortionCalibration;
@property (nonatomic) float pixelSize;
@property (nonatomic) int geometricDistortionCalibrationMaxRadius;
@property (nonatomic) void /* unknown type, empty encoding */ geometricDistortionCenter;
@property (retain, nonatomic) NSData *forwardGeometricDistortionPolynomial;
@property (retain, nonatomic) NSData *inverseGeometricDistortionPolynomial;
@property (retain, nonatomic) NSString *portType;
@property (nonatomic) int sensorID;

- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_updateModel;
- (void)_updateModelExtrinsicProperties;
- (void)_updateModelIntrinsicProperties;
- (float)_calculateEffectiveFocalLengthFromFOV:(float)a0;
- (float)_calculateFOVFromEffectiveFocalLength:(float)a0;
- (float)_calculateValidImageCircleRadius;
- (void)_updateModelDistortionProperties;
- (int)updateWithCalibration:(id)a0;

@end
