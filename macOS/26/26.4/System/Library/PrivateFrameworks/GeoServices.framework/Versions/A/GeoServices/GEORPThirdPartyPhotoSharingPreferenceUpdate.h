@class GEORPThirdPartyPhotoSharingPreference;

@interface GEORPThirdPartyPhotoSharingPreferenceUpdate : PBCodable <NSCopying> {
    GEORPThirdPartyPhotoSharingPreference *_preference;
}

@property (readonly, nonatomic) BOOL hasPreference;
@property (retain, nonatomic) GEORPThirdPartyPhotoSharingPreference *preference;

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
- (id)description;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;

@end
