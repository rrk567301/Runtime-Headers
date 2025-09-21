@class NSString, _INPBContact;

@interface _INPBEventParticipant : PBCodable <_INPBEventParticipant, NSSecureCoding, NSCopying> {
    struct { unsigned char isEventOrganizer : 1; unsigned char isUser : 1; unsigned char status : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char isEventOrganizer;
@property (nonatomic) char hasIsEventOrganizer;
@property (nonatomic) char isUser;
@property (nonatomic) char hasIsUser;
@property (retain, nonatomic) _INPBContact *person;
@property (readonly, nonatomic) char hasPerson;
@property (nonatomic) int status;
@property (nonatomic) char hasStatus;
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
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;

@end
