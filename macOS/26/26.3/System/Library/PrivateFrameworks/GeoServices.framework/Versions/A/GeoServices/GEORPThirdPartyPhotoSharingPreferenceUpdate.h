@class GEORPThirdPartyPhotoSharingPreference;

@interface GEORPThirdPartyPhotoSharingPreferenceUpdate : PBCodable <NSCopying> {
    GEORPThirdPartyPhotoSharingPreference *_preference;
}

@property (readonly, nonatomic) BOOL hasPreference;
@property (retain, nonatomic) GEORPThirdPartyPhotoSharingPreference *preference;

+ (BOOL)isValid:(id)a0;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;

@end
