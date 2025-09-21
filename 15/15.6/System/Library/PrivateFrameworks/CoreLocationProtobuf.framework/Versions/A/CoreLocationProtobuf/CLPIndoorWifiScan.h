@class NSString;

@interface CLPIndoorWifiScan : PBCodable <NSCopying> {
    struct { unsigned char age : 1; unsigned char hidden : 1; } _has;
}

@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSString *mac;
@property (nonatomic) int channel;
@property (nonatomic) char hasHidden;
@property (nonatomic) int hidden;
@property (nonatomic) int rssi;
@property (nonatomic) char hasAge;
@property (nonatomic) double age;
@property (readonly, nonatomic) char hasBundleId;
@property (retain, nonatomic) NSString *bundleId;

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
