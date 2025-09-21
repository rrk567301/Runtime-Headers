@class GEORPThirdPartyPhotoSharingPreference, PBDataReader;

@interface GEORPThirdPartyPhotoSharingPreferenceUpdateResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { int *list; unsigned long long count; unsigned long long size; } _errors;
    GEORPThirdPartyPhotoSharingPreference *_preference;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_errors : 1; unsigned char read_preference : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long errorsCount;
@property (readonly, nonatomic) int *errors;
@property (readonly, nonatomic) char hasPreference;
@property (retain, nonatomic) GEORPThirdPartyPhotoSharingPreference *preference;

+ (char)isValid:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)errorsAsString:(int)a0;
- (int)StringAsErrors:(id)a0;
- (void)addErrors:(int)a0;
- (void)clearErrors;
- (int)errorsAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (void)setErrors:(int *)a0 count:(unsigned long long)a1;

@end
