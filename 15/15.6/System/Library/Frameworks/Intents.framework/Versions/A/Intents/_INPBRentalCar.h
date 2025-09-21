@class NSString;

@interface _INPBRentalCar : PBCodable <_INPBRentalCar, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *make;
@property (readonly, nonatomic) char hasMake;
@property (copy, nonatomic) NSString *model;
@property (readonly, nonatomic) char hasModel;
@property (copy, nonatomic) NSString *rentalCarDescription;
@property (readonly, nonatomic) char hasRentalCarDescription;
@property (copy, nonatomic) NSString *rentalCompanyName;
@property (readonly, nonatomic) char hasRentalCompanyName;
@property (copy, nonatomic) NSString *type;
@property (readonly, nonatomic) char hasType;
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
