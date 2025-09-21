@class NSString;

@interface GEOWiFiPasspointInfo : PBCodable <NSCopying> {
    NSString *_venueName;
    int _networkType;
    int _venueGroup;
    unsigned int _venueType;
    struct { unsigned char has_networkType : 1; unsigned char has_venueGroup : 1; unsigned char has_venueType : 1; } _flags;
}

@property (nonatomic) char hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) char hasVenueGroup;
@property (nonatomic) int venueGroup;
@property (nonatomic) char hasVenueType;
@property (nonatomic) unsigned int venueType;
@property (readonly, nonatomic) char hasVenueName;
@property (retain, nonatomic) NSString *venueName;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsNetworkType:(id)a0;
- (int)StringAsVenueGroup:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)networkTypeAsString:(int)a0;
- (void)readAll:(char)a0;
- (id)venueGroupAsString:(int)a0;

@end
