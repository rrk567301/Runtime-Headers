@interface AWDSafariSetAutoFillQuickTypeSuggestionEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char category : 1; unsigned char formProperty : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasCategory;
@property (nonatomic) int category;
@property (nonatomic) char hasFormProperty;
@property (nonatomic) int formProperty;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsCategory:(id)a0;
- (id)categoryAsString:(int)a0;
- (int)StringAsFormProperty:(id)a0;
- (id)formPropertyAsString:(int)a0;

@end
