@class NSString;

@interface WiFiAnalyticsAWDWiFiNWActivityHistogramBin : PBCodable <NSCopying> {
    struct { unsigned char hits : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBin;
@property (retain, nonatomic) NSString *bin;
@property (nonatomic) BOOL hasHits;
@property (nonatomic) unsigned long long hits;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
