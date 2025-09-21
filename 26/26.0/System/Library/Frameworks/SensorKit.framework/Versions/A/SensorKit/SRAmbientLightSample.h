@class NSString, NSMeasurement;

@interface SRAmbientLightSample : NSObject <SRSampleDirectExporting, NSSecureCoding, SRSampling, NSCopying> {
    long long _comboTypePlacement;
    float _luxValue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *typeString;
@property (readonly, copy) NSString *placementString;
@property (readonly) long long placement;
@property (readonly) struct { float x; float y; } chromaticity;
@property (readonly, copy) NSMeasurement *lux;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSample:(struct { long long x0; float x1; struct { float x0; float x1; } x2; } *)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)sr_dictionaryRepresentation;
- (BOOL)sr_prefersUTF8StringRepresentation;
- (long long)sr_writeUTF8RepresentationToOutputStream:(id)a0;
- (long long)chipType;
- (id)initWithSRALSSampleStruct:(struct { long long x0; long long x1; float x2; struct { float x0; float x1; } x3; } *)a0;

@end
