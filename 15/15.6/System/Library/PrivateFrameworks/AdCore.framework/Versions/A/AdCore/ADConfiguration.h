@class NSString;

@interface ADConfiguration : PBCodable <NSCopying> {
    struct { unsigned char expirationDate : 1; unsigned char requestType : 1; unsigned char isTest : 1; } _has;
}

@property (readonly, nonatomic) char hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) char hasRequestType;
@property (nonatomic) int requestType;
@property (nonatomic) char hasIsTest;
@property (nonatomic) char isTest;
@property (readonly, nonatomic) char hasBaseUrl;
@property (retain, nonatomic) NSString *baseUrl;
@property (nonatomic) char hasExpirationDate;
@property (nonatomic) double expirationDate;

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
