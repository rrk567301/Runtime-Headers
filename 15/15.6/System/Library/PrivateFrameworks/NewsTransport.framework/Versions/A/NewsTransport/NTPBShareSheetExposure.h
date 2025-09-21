@class NSString;

@interface NTPBShareSheetExposure : PBCodable <NSCopying> {
    struct { unsigned char contentType : 1; unsigned char shareSheetExposureLocation : 1; } _has;
}

@property (nonatomic) char hasContentType;
@property (nonatomic) int contentType;
@property (readonly, nonatomic) char hasContentId;
@property (retain, nonatomic) NSString *contentId;
@property (readonly, nonatomic) char hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (nonatomic) char hasShareSheetExposureLocation;
@property (nonatomic) int shareSheetExposureLocation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsContentType:(id)a0;
- (id)contentTypeAsString:(int)a0;

@end
