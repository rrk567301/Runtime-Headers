@class NSString, _INPBImageValue, _INPBContactValue;

@interface _INPBRideDriver : PBCodable <_INPBRideDriver, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBImageValue *image;
@property (readonly, nonatomic) char hasImage;
@property (retain, nonatomic) _INPBContactValue *person;
@property (readonly, nonatomic) char hasPerson;
@property (copy, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) char hasPhoneNumber;
@property (copy, nonatomic) NSString *rating;
@property (readonly, nonatomic) char hasRating;
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
