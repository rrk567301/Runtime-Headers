@class NSString, NSData;

@interface NSPPrivacyProxyResolverInfo : PBCodable <NSCopying> {
    struct { unsigned char proxyIndex : 1; unsigned char weight : 1; } _has;
}

@property (readonly, nonatomic) char hasDohURL;
@property (retain, nonatomic) NSString *dohURL;
@property (readonly, nonatomic) char hasObliviousDoHConfig;
@property (retain, nonatomic) NSData *obliviousDoHConfig;
@property (nonatomic) char hasWeight;
@property (nonatomic) unsigned int weight;
@property (nonatomic) char hasProxyIndex;
@property (nonatomic) unsigned int proxyIndex;

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
