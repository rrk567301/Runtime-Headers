@class NSString, NSMutableArray, NSData;

@interface BCSWebPresentmentParquetMessage : PBCodable <NSCopying> {
    struct { unsigned char itemTtl : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasCompanyId;
@property (retain, nonatomic) NSString *companyId;
@property (readonly, nonatomic) BOOL hasBusinessId;
@property (retain, nonatomic) NSString *businessId;
@property (readonly, nonatomic) BOOL hasBcBrandId;
@property (retain, nonatomic) NSString *bcBrandId;
@property (retain, nonatomic) NSMutableArray *names;
@property (readonly, nonatomic) BOOL hasLogo;
@property (retain, nonatomic) NSData *logo;
@property (readonly, nonatomic) BOOL hasLogoFormat;
@property (retain, nonatomic) NSString *logoFormat;
@property (nonatomic) BOOL hasItemTtl;
@property (nonatomic) unsigned long long itemTtl;

+ (Class)nameType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)addName:(id)a0;
- (unsigned long long)namesCount;
- (id)description;
- (void).cxx_destruct;
- (id)nameAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearNames;
- (void)writeTo:(id)a0;

@end
