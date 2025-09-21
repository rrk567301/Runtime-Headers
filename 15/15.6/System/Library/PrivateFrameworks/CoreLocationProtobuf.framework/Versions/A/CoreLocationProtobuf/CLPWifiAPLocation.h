@class NSString, CLPLocation;

@interface CLPWifiAPLocation : PBCodable <NSCopying> {
    struct { unsigned char scanTimestamp : 1; unsigned char hidden : 1; unsigned char scanType : 1; unsigned char serverHash : 1; } _has;
}

@property (retain, nonatomic) NSString *mac;
@property (nonatomic) int channel;
@property (nonatomic) char hasHidden;
@property (nonatomic) int hidden;
@property (nonatomic) int rssi;
@property (nonatomic) char hasScanTimestamp;
@property (nonatomic) double scanTimestamp;
@property (retain, nonatomic) CLPLocation *location;
@property (readonly, nonatomic) char hasAppBundleId;
@property (retain, nonatomic) NSString *appBundleId;
@property (nonatomic) char hasServerHash;
@property (nonatomic) int serverHash;
@property (nonatomic) char hasScanType;
@property (nonatomic) int scanType;

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
- (int)StringAsScanType:(id)a0;
- (id)scanTypeAsString:(int)a0;

@end
