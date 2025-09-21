@interface AWDWiFiLTECoexTxBlanking : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char type4BlankingCount : 1; unsigned char type4BlankingTimeInMS : 1; unsigned char type4ResumeCount : 1; unsigned char type7BlankingCount : 1; unsigned char type7BlankingTimeInMS : 1; unsigned char type7ResumeCount : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasType4BlankingCount;
@property (nonatomic) unsigned long long type4BlankingCount;
@property (nonatomic) char hasType4ResumeCount;
@property (nonatomic) unsigned long long type4ResumeCount;
@property (nonatomic) char hasType4BlankingTimeInMS;
@property (nonatomic) unsigned long long type4BlankingTimeInMS;
@property (nonatomic) char hasType7BlankingCount;
@property (nonatomic) unsigned long long type7BlankingCount;
@property (nonatomic) char hasType7ResumeCount;
@property (nonatomic) unsigned long long type7ResumeCount;
@property (nonatomic) char hasType7BlankingTimeInMS;
@property (nonatomic) unsigned long long type7BlankingTimeInMS;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
