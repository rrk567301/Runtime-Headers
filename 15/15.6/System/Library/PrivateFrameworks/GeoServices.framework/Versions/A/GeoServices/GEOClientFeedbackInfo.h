@class NSMutableArray, PBUnknownFields;

@interface GEOClientFeedbackInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_displayedBannerEventInfos;
}

@property (retain, nonatomic) NSMutableArray *displayedBannerEventInfos;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)displayedBannerEventInfoType;
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
- (void)addDisplayedBannerEventInfo:(id)a0;
- (void)clearDisplayedBannerEventInfos;
- (void)clearUnknownFields:(char)a0;
- (id)displayedBannerEventInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)displayedBannerEventInfosCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
