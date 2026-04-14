@interface AWDWiFiNWActivityRateAndAggregation : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _ampduAGGs;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _rxMCSSuccess;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _rxVHTSuccess;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _txMCSSuccess;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _txVHTSuccess;
}

@property (readonly, nonatomic) unsigned long long rxVHTSuccessCount;
@property (readonly, nonatomic) unsigned long long *rxVHTSuccess;
@property (readonly, nonatomic) unsigned long long txVHTSuccessCount;
@property (readonly, nonatomic) unsigned long long *txVHTSuccess;
@property (readonly, nonatomic) unsigned long long rxMCSSuccessCount;
@property (readonly, nonatomic) unsigned long long *rxMCSSuccess;
@property (readonly, nonatomic) unsigned long long txMCSSuccessCount;
@property (readonly, nonatomic) unsigned long long *txMCSSuccess;
@property (readonly, nonatomic) unsigned long long ampduAGGsCount;
@property (readonly, nonatomic) unsigned long long *ampduAGGs;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearRxVHTSuccess;
- (void)addRxVHTSuccess:(unsigned long long)a0;
- (unsigned long long)rxVHTSuccessAtIndex:(unsigned long long)a0;
- (void)setRxVHTSuccess:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)clearTxVHTSuccess;
- (void)addTxVHTSuccess:(unsigned long long)a0;
- (unsigned long long)txVHTSuccessAtIndex:(unsigned long long)a0;
- (void)setTxVHTSuccess:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)clearRxMCSSuccess;
- (void)addRxMCSSuccess:(unsigned long long)a0;
- (unsigned long long)rxMCSSuccessAtIndex:(unsigned long long)a0;
- (void)setRxMCSSuccess:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)clearTxMCSSuccess;
- (void)addTxMCSSuccess:(unsigned long long)a0;
- (unsigned long long)txMCSSuccessAtIndex:(unsigned long long)a0;
- (void)setTxMCSSuccess:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)clearAmpduAGGs;
- (void)addAmpduAGG:(unsigned long long)a0;
- (unsigned long long)ampduAGGAtIndex:(unsigned long long)a0;
- (void)setAmpduAGGs:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
