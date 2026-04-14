@class NSString;

@interface WiFiAnalyticsAWDWiFiNWActivityStateBin : PBCodable <NSCopying> {
    struct { unsigned char residentTime : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasState;
@property (retain, nonatomic) NSString *state;
@property (nonatomic) BOOL hasResidentTime;
@property (nonatomic) unsigned long long residentTime;

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
