@class NSString;

@interface CKCDPCodeServiceRequestAccountConfig : PBCodable <NSCopying> {
    struct { unsigned char accountFlags : 1; unsigned char lastWebActivityUTCMills : 1; unsigned char photosWebAccessTimestamp : 1; unsigned char corporateSharingEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasCorporateSharingEnabled;
@property (nonatomic) BOOL corporateSharingEnabled;
@property (nonatomic) BOOL hasLastWebActivityUTCMills;
@property (nonatomic) long long lastWebActivityUTCMills;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) BOOL hasPhotosWebAccessTimestamp;
@property (nonatomic) long long photosWebAccessTimestamp;
@property (nonatomic) BOOL hasAccountFlags;
@property (nonatomic) unsigned long long accountFlags;

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
