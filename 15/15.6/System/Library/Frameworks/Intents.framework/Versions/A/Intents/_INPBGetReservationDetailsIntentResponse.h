@class NSArray, NSString;

@interface _INPBGetReservationDetailsIntentResponse : PBCodable <_INPBGetReservationDetailsIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *reservations;
@property (readonly, nonatomic) unsigned long long reservationsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)reservationsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addReservations:(id)a0;
- (void)clearReservations;
- (id)reservationsAtIndex:(unsigned long long)a0;

@end
