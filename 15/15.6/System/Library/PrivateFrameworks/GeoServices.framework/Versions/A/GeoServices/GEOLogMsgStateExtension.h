@class PBUnknownFields;

@interface GEOLogMsgStateExtension : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    char _hasRideBookingAppEnabled;
    char _hasRideBookingAppInstalled;
    char _hasTableBookingAppEnabled;
    char _hasTableBookingAppInstalled;
    struct { unsigned char has_hasRideBookingAppEnabled : 1; unsigned char has_hasRideBookingAppInstalled : 1; unsigned char has_hasTableBookingAppEnabled : 1; unsigned char has_hasTableBookingAppInstalled : 1; } _flags;
}

@property (nonatomic) char hasHasRideBookingAppInstalled;
@property (nonatomic) char hasRideBookingAppInstalled;
@property (nonatomic) char hasHasRideBookingAppEnabled;
@property (nonatomic) char hasRideBookingAppEnabled;
@property (nonatomic) char hasHasTableBookingAppInstalled;
@property (nonatomic) char hasTableBookingAppInstalled;
@property (nonatomic) char hasHasTableBookingAppEnabled;
@property (nonatomic) char hasTableBookingAppEnabled;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
