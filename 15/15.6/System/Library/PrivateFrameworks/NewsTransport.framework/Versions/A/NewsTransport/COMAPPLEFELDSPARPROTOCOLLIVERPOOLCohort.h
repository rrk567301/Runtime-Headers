@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort : PBCodable <NSCopying> {
    struct { unsigned char clicks : 1; unsigned char impressions : 1; unsigned char rawClicks : 1; unsigned char timestamp : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasClicks;
@property (nonatomic) double clicks;
@property (nonatomic) char hasImpressions;
@property (nonatomic) double impressions;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) long long timestamp;
@property (nonatomic) char hasRawClicks;
@property (nonatomic) double rawClicks;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
