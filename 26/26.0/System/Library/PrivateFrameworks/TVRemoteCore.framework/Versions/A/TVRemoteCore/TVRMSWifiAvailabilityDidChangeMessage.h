@interface TVRMSWifiAvailabilityDidChangeMessage : PBCodable <NSCopying> {
    struct { unsigned char sessionIdentifier : 1; unsigned char wifiAvailable : 1; } _has;
}

@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;
@property (nonatomic) BOOL hasWifiAvailable;
@property (nonatomic) BOOL wifiAvailable;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
