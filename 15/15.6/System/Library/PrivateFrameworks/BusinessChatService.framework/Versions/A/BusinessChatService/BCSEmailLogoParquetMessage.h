@class NSString, NSData;

@interface BCSEmailLogoParquetMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasBusinessId;
@property (retain, nonatomic) NSString *businessId;
@property (readonly, nonatomic) char hasLogoFormat;
@property (retain, nonatomic) NSString *logoFormat;
@property (readonly, nonatomic) char hasLogo;
@property (retain, nonatomic) NSData *logo;

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
