@class PBUnknownFields;

@interface GEONavVoiceGuidanceSettings : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    int _navVoiceGuidanceLevel;
    int _transportMode;
    struct { unsigned char has_navVoiceGuidanceLevel : 1; unsigned char has_transportMode : 1; } _flags;
}

@property (nonatomic) BOOL hasNavVoiceGuidanceLevel;
@property (nonatomic) int navVoiceGuidanceLevel;
@property (nonatomic) BOOL hasTransportMode;
@property (nonatomic) int transportMode;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (int)StringAsNavVoiceGuidanceLevel:(id)a0;
- (int)StringAsTransportMode:(id)a0;
- (id)navVoiceGuidanceLevelAsString:(int)a0;
- (id)transportModeAsString:(int)a0;

@end
