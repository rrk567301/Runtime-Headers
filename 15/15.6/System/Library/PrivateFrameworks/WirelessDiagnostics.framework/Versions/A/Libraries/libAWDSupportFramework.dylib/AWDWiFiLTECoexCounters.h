@class AWDWiFiLTECoexBin;

@interface AWDWiFiLTECoexCounters : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) char hasNoLTECoexBin;
@property (retain, nonatomic) AWDWiFiLTECoexBin *noLTECoexBin;
@property (readonly, nonatomic) char hasLightLTECoexBin;
@property (retain, nonatomic) AWDWiFiLTECoexBin *lightLTECoexBin;
@property (readonly, nonatomic) char hasHeavyLTECoexBin;
@property (retain, nonatomic) AWDWiFiLTECoexBin *heavyLTECoexBin;

- (void)dealloc;
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
