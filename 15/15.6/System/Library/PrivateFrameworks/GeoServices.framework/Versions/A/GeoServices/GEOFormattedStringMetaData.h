@class PBUnknownFields;

@interface GEOFormattedStringMetaData : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _realtimeStatus;
    int _spokenPrivacyFilterType;
    struct { unsigned char has_realtimeStatus : 1; unsigned char has_spokenPrivacyFilterType : 1; } _flags;
}

@property (nonatomic) char hasRealtimeStatus;
@property (nonatomic) int realtimeStatus;
@property (nonatomic) char hasSpokenPrivacyFilterType;
@property (nonatomic) int spokenPrivacyFilterType;
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
- (int)StringAsSpokenPrivacyFilterType:(id)a0;
- (int)StringAsRealtimeStatus:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)realtimeStatusAsString:(int)a0;
- (id)spokenPrivacyFilterTypeAsString:(int)a0;

@end
