@class NSString, NSData;

@interface NSPPrivacyProxyResolverInfo : PBCodable <NSCopying> {
    struct { unsigned char proxyIndex : 1; unsigned char weight : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDohURL;
@property (retain, nonatomic) NSString *dohURL;
@property (readonly, nonatomic) BOOL hasObliviousDoHConfig;
@property (retain, nonatomic) NSData *obliviousDoHConfig;
@property (nonatomic) BOOL hasWeight;
@property (nonatomic) unsigned int weight;
@property (nonatomic) BOOL hasProxyIndex;
@property (nonatomic) unsigned int proxyIndex;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
