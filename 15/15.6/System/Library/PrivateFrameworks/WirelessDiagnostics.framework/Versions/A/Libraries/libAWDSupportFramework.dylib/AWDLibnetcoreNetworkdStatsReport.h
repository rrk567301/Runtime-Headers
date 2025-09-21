@interface AWDLibnetcoreNetworkdStatsReport : PBCodable <NSCopying> {
    struct { unsigned char fallbackConnectionCount : 1; unsigned char totalConnectionCount : 1; unsigned char totalSuccessfulConnectionCount : 1; } _has;
}

@property (nonatomic) char hasTotalConnectionCount;
@property (nonatomic) unsigned long long totalConnectionCount;
@property (nonatomic) char hasTotalSuccessfulConnectionCount;
@property (nonatomic) unsigned long long totalSuccessfulConnectionCount;
@property (nonatomic) char hasFallbackConnectionCount;
@property (nonatomic) unsigned long long fallbackConnectionCount;

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
