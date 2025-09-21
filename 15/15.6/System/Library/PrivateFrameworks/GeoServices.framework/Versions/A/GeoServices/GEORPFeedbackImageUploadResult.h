@class NSMutableArray, PBUnknownFields;

@interface GEORPFeedbackImageUploadResult : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_imageUploadInfos;
}

@property (retain, nonatomic) NSMutableArray *imageUploadInfos;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)imageUploadInfoType;
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
- (void)addImageUploadInfo:(id)a0;
- (void)clearImageUploadInfos;
- (void)clearUnknownFields:(char)a0;
- (id)imageUploadInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)imageUploadInfosCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
