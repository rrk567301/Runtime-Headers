@class NSString, GEOLocation, _INPBImageValue;

@interface _INPBRideVehicle : PBCodable <_INPBRideVehicle, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) GEOLocation *location;
@property (readonly, nonatomic) char hasLocation;
@property (copy, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) char hasManufacturer;
@property (retain, nonatomic) _INPBImageValue *mapAnnotationImage;
@property (readonly, nonatomic) char hasMapAnnotationImage;
@property (copy, nonatomic) NSString *model;
@property (readonly, nonatomic) char hasModel;
@property (copy, nonatomic) NSString *registrationPlate;
@property (readonly, nonatomic) char hasRegistrationPlate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
