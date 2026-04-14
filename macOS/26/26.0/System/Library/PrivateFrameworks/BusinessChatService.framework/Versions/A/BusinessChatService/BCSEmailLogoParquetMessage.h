@class NSString, NSData;

@interface BCSEmailLogoParquetMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBusinessId;
@property (retain, nonatomic) NSString *businessId;
@property (readonly, nonatomic) BOOL hasLogoFormat;
@property (retain, nonatomic) NSString *logoFormat;
@property (readonly, nonatomic) BOOL hasLogo;
@property (retain, nonatomic) NSData *logo;

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

@end
