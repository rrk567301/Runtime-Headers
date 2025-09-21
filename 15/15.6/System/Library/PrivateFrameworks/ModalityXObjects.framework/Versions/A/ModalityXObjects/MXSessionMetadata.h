@class MXDeviceInfo, NSString;

@interface MXSessionMetadata : PBCodable <NSCopying> {
    struct { unsigned char userInterfaceIdiom : 1; unsigned char dataSharingOptInStatus : 1; } _has;
}

@property (readonly, nonatomic) char hasDeviceInfo;
@property (retain, nonatomic) MXDeviceInfo *deviceInfo;
@property (nonatomic) char hasDataSharingOptInStatus;
@property (nonatomic) char dataSharingOptInStatus;
@property (nonatomic) char hasUserInterfaceIdiom;
@property (nonatomic) int userInterfaceIdiom;
@property (readonly, nonatomic) char hasLanguage;
@property (retain, nonatomic) NSString *language;

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
- (int)StringAsUserInterfaceIdiom:(id)a0;
- (id)userInterfaceIdiomAsString:(int)a0;

@end
