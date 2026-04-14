@class NSData, NSMutableArray, NSPPrivacyProxyConfiguration;

@interface NSPPrivacyProxySignedConfiguration : PBCodable <NSCopying> {
    struct { unsigned char algorithm : 1; } _has;
}

@property (retain, nonatomic) NSPPrivacyProxyConfiguration *configuration;
@property (retain, nonatomic) NSData *signature;
@property (retain, nonatomic) NSMutableArray *certificates;
@property (nonatomic) BOOL hasAlgorithm;
@property (nonatomic) int algorithm;

+ (Class)certificatesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (id)algorithmAsString:(int)a0;
- (int)StringAsAlgorithm:(id)a0;
- (void)writeTo:(id)a0;
- (void)addCertificates:(id)a0;
- (id)certificatesAtIndex:(unsigned long long)a0;
- (unsigned long long)certificatesCount;
- (void)clearCertificates;

@end
