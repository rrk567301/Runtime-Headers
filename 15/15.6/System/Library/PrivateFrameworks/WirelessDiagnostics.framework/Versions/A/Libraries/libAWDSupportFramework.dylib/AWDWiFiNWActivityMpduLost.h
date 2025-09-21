@class AWDWiFiNWActivityMpduWME;

@interface AWDWiFiNWActivityMpduLost : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasBALost;
@property (retain, nonatomic) AWDWiFiNWActivityMpduWME *bALost;
@property (readonly, nonatomic) char hasNonBALost;
@property (retain, nonatomic) AWDWiFiNWActivityMpduWME *nonBALost;

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
