@class MXDeviceInfo, NSString;

@interface MXSessionMetadata : PBCodable <NSCopying> {
    struct { unsigned char userInterfaceIdiom : 1; unsigned char dataSharingOptInStatus : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDeviceInfo;
@property (retain, nonatomic) MXDeviceInfo *deviceInfo;
@property (nonatomic) BOOL hasDataSharingOptInStatus;
@property (nonatomic) BOOL dataSharingOptInStatus;
@property (nonatomic) BOOL hasUserInterfaceIdiom;
@property (nonatomic) int userInterfaceIdiom;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsUserInterfaceIdiom:(id)a0;
- (id)userInterfaceIdiomAsString:(int)a0;

@end
