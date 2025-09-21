@class NSString, _INPBString, _INPBLocation, _INPBIntentMetadata;

@interface _INPBSaveParkingLocationIntent : PBCodable <_INPBSaveParkingLocationIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (retain, nonatomic) _INPBLocation *parkingLocation;
@property (readonly, nonatomic) char hasParkingLocation;
@property (retain, nonatomic) _INPBString *parkingNote;
@property (readonly, nonatomic) char hasParkingNote;
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
