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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearCertificates;
- (void)addCertificates:(id)a0;
- (unsigned long long)certificatesCount;
- (id)certificatesAtIndex:(unsigned long long)a0;
- (id)algorithmAsString:(int)a0;
- (int)StringAsAlgorithm:(id)a0;

@end
