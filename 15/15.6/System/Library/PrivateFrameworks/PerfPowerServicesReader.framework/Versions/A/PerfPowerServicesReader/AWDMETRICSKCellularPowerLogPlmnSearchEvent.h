@interface AWDMETRICSKCellularPowerLogPlmnSearchEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char duration : 1; unsigned char rat : 1; unsigned char result : 1; unsigned char searchReason : 1; unsigned char searchType : 1; unsigned char subsId : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasResult;
@property (nonatomic) int result;
@property (nonatomic) char hasRat;
@property (nonatomic) int rat;
@property (nonatomic) char hasSearchType;
@property (nonatomic) int searchType;
@property (nonatomic) char hasSearchReason;
@property (nonatomic) int searchReason;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) char hasSubsId;
@property (nonatomic) unsigned int subsId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)resultAsString:(int)a0;
- (int)StringAsResult:(id)a0;
- (int)StringAsSearchType:(id)a0;
- (id)searchTypeAsString:(int)a0;
- (int)StringAsSearchReason:(id)a0;
- (int)StringAsRat:(id)a0;
- (id)ratAsString:(int)a0;
- (id)searchReasonAsString:(int)a0;

@end
