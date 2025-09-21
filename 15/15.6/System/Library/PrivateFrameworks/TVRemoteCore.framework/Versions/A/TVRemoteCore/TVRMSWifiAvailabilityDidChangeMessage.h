@interface TVRMSWifiAvailabilityDidChangeMessage : PBCodable <NSCopying> {
    struct { unsigned char sessionIdentifier : 1; unsigned char wifiAvailable : 1; } _has;
}

@property (nonatomic) char hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;
@property (nonatomic) char hasWifiAvailable;
@property (nonatomic) char wifiAvailable;

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
