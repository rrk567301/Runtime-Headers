@class NSArray, NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBGetReservationDetailsIntent : PBCodable <_INPBGetReservationDetailsIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (retain, nonatomic) _INPBDataString *reservationContainerReference;
@property (readonly, nonatomic) char hasReservationContainerReference;
@property (copy, nonatomic) NSArray *reservationItemReferences;
@property (readonly, nonatomic) unsigned long long reservationItemReferencesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)reservationItemReferencesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addReservationItemReferences:(id)a0;
- (void)clearReservationItemReferences;
- (id)reservationItemReferencesAtIndex:(unsigned long long)a0;

@end
