@class NSString;

@interface WiFiAnalyticsAWDWiFiNWActivityHistogramBin : PBCodable <NSCopying> {
    struct { unsigned char hits : 1; } _has;
}

@property (readonly, nonatomic) char hasBin;
@property (retain, nonatomic) NSString *bin;
@property (nonatomic) char hasHits;
@property (nonatomic) unsigned long long hits;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
