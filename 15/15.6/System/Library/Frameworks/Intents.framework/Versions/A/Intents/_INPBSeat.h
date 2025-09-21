@class NSString;

@interface _INPBSeat : PBCodable <_INPBSeat, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *seatNumber;
@property (readonly, nonatomic) char hasSeatNumber;
@property (copy, nonatomic) NSString *seatRow;
@property (readonly, nonatomic) char hasSeatRow;
@property (copy, nonatomic) NSString *seatSection;
@property (readonly, nonatomic) char hasSeatSection;
@property (copy, nonatomic) NSString *seatingType;
@property (readonly, nonatomic) char hasSeatingType;
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
