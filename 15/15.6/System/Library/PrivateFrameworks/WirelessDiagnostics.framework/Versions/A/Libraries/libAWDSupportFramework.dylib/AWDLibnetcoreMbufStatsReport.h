@interface AWDLibnetcoreMbufStatsReport : PBCodable <NSCopying> {
    struct { unsigned char mbuf16KBTotal : 1; unsigned char mbuf256BTotal : 1; unsigned char mbuf2KBTotal : 1; unsigned char mbuf4KBTotal : 1; unsigned char mbufDrainCount : 1; unsigned char mbufMemReleased : 1; unsigned char sockAtMBLimit : 1; unsigned char sockMBcnt : 1; } _has;
}

@property (nonatomic) char hasMbuf256BTotal;
@property (nonatomic) unsigned long long mbuf256BTotal;
@property (nonatomic) char hasMbuf2KBTotal;
@property (nonatomic) unsigned long long mbuf2KBTotal;
@property (nonatomic) char hasMbuf4KBTotal;
@property (nonatomic) unsigned long long mbuf4KBTotal;
@property (nonatomic) char hasMbuf16KBTotal;
@property (nonatomic) unsigned long long mbuf16KBTotal;
@property (nonatomic) char hasSockMBcnt;
@property (nonatomic) unsigned long long sockMBcnt;
@property (nonatomic) char hasSockAtMBLimit;
@property (nonatomic) unsigned long long sockAtMBLimit;
@property (nonatomic) char hasMbufMemReleased;
@property (nonatomic) unsigned long long mbufMemReleased;
@property (nonatomic) char hasMbufDrainCount;
@property (nonatomic) unsigned long long mbufDrainCount;

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
