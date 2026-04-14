@class NSString;

@interface CLPIndoorWifiScan : PBCodable <NSCopying> {
    struct { unsigned char age : 1; unsigned char hidden : 1; } _has;
}

@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSString *mac;
@property (nonatomic) int channel;
@property (nonatomic) BOOL hasHidden;
@property (nonatomic) int hidden;
@property (nonatomic) int rssi;
@property (nonatomic) BOOL hasAge;
@property (nonatomic) double age;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
