@class NSString, NSMutableArray;

@interface BCSEmailMetadataParquetMessage : PBCodable <NSCopying> {
    struct { unsigned char keyHash : 1; unsigned char isVerified : 1; } _has;
}

@property (nonatomic) BOOL hasKeyHash;
@property (nonatomic) long long keyHash;
@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSMutableArray *names;
@property (retain, nonatomic) NSMutableArray *displayNames;
@property (nonatomic) BOOL hasIsVerified;
@property (nonatomic) BOOL isVerified;
@property (readonly, nonatomic) BOOL hasBusinessId;
@property (retain, nonatomic) NSString *businessId;
@property (readonly, nonatomic) BOOL hasCompanyId;
@property (retain, nonatomic) NSString *companyId;

+ (Class)nameType;
+ (Class)displayNameType;

- (void)copyTo:(id)a0;
- (unsigned long long)namesCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addName:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearNames;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)nameAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addDisplayName:(id)a0;
- (void)clearDisplayNames;
- (id)displayNameAtIndex:(unsigned long long)a0;
- (unsigned long long)displayNamesCount;

@end
