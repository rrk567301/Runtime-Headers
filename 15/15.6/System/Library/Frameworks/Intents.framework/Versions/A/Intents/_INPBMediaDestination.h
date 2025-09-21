@class NSString, _INPBString;

@interface _INPBMediaDestination : PBCodable <_INPBMediaDestination, NSSecureCoding, NSCopying> {
    struct { unsigned char mediaDestinationType : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int mediaDestinationType;
@property (nonatomic) char hasMediaDestinationType;
@property (retain, nonatomic) _INPBString *playlistName;
@property (readonly, nonatomic) char hasPlaylistName;
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
- (int)StringAsMediaDestinationType:(id)a0;
- (id)mediaDestinationTypeAsString:(int)a0;

@end
