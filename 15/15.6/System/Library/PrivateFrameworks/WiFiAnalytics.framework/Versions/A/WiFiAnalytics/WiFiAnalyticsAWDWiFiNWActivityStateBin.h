@class NSString;

@interface WiFiAnalyticsAWDWiFiNWActivityStateBin : PBCodable <NSCopying> {
    struct { unsigned char residentTime : 1; } _has;
}

@property (readonly, nonatomic) char hasState;
@property (retain, nonatomic) NSString *state;
@property (nonatomic) char hasResidentTime;
@property (nonatomic) unsigned long long residentTime;

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
