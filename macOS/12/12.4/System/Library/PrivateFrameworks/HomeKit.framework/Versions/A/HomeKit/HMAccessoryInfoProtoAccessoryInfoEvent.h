@class HMAccessoryInfoProtoWifiNetworkInfoEvent;

@interface HMAccessoryInfoProtoAccessoryInfoEvent : PBCodable <NSCopying> {
    struct { unsigned char accessoryInfoEvent : 1; unsigned char readOnly : 1; } _has;
}

@property (nonatomic) BOOL hasReadOnly;
@property (nonatomic) BOOL readOnly;
@property (readonly, nonatomic) BOOL hasWifiNetworkInfo;
@property (retain, nonatomic) HMAccessoryInfoProtoWifiNetworkInfoEvent *wifiNetworkInfo;
@property (nonatomic) BOOL hasAccessoryInfoEvent;
@property (nonatomic) int accessoryInfoEvent;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)clearOneofValuesForAccessoryInfoEvent;
- (id)accessoryInfoEventAsString:(int)a0;
- (int)StringAsAccessoryInfoEvent:(id)a0;

@end
