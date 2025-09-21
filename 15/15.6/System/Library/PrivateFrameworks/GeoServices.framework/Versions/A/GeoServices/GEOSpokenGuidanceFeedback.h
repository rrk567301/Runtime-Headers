@class GEOTrafficCameraInformation;

@interface GEOSpokenGuidanceFeedback : PBCodable <NSCopying> {
    GEOTrafficCameraInformation *_trafficCameraGuidanceFeedback;
    int _spokenGuidanceIndex;
    char _shortPrompt;
    struct { unsigned char has_spokenGuidanceIndex : 1; unsigned char has_shortPrompt : 1; } _flags;
}

@property (nonatomic) char hasSpokenGuidanceIndex;
@property (nonatomic) int spokenGuidanceIndex;
@property (nonatomic) char hasShortPrompt;
@property (nonatomic) char shortPrompt;
@property (readonly, nonatomic) char hasTrafficCameraGuidanceFeedback;
@property (retain, nonatomic) GEOTrafficCameraInformation *trafficCameraGuidanceFeedback;

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
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
