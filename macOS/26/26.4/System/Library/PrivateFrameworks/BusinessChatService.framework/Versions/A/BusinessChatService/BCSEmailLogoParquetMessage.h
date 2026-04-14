@class NSString, NSData;

@interface BCSEmailLogoParquetMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBusinessId;
@property (retain, nonatomic) NSString *businessId;
@property (readonly, nonatomic) BOOL hasLogoFormat;
@property (retain, nonatomic) NSString *logoFormat;
@property (readonly, nonatomic) BOOL hasLogo;
@property (retain, nonatomic) NSData *logo;

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
