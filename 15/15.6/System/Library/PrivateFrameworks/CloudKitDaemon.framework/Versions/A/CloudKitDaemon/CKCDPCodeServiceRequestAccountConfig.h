@class NSString;

@interface CKCDPCodeServiceRequestAccountConfig : PBCodable <NSCopying> {
    struct { unsigned char accountFlags : 1; unsigned char lastWebActivityUTCMills : 1; unsigned char photosWebAccessTimestamp : 1; unsigned char corporateSharingEnabled : 1; } _has;
}

@property (nonatomic) char hasCorporateSharingEnabled;
@property (nonatomic) char corporateSharingEnabled;
@property (nonatomic) char hasLastWebActivityUTCMills;
@property (nonatomic) long long lastWebActivityUTCMills;
@property (readonly, nonatomic) char hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) char hasPhotosWebAccessTimestamp;
@property (nonatomic) long long photosWebAccessTimestamp;
@property (nonatomic) char hasAccountFlags;
@property (nonatomic) unsigned long long accountFlags;

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
