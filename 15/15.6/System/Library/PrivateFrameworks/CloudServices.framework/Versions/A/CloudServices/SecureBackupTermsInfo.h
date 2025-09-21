@class NSString;

@interface SecureBackupTermsInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasVersion;
@property (retain, nonatomic) NSString *version;
@property (readonly, nonatomic) char hasIcloudVersion;
@property (retain, nonatomic) NSString *icloudVersion;
@property (readonly, nonatomic) char hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) char hasMetadata;
@property (retain, nonatomic) NSString *metadata;
@property (readonly, nonatomic) char hasAltDSID;
@property (retain, nonatomic) NSString *altDSID;

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
