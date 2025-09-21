@class NSString, CLPLocation;

@interface CLPCellOutOfServiceInfo : PBCodable <NSCopying> {
    struct { unsigned char hasWifiFallback : 1; unsigned char uniqueCount : 1; } _has;
}

@property (readonly, nonatomic) char hasLocation;
@property (retain, nonatomic) CLPLocation *location;
@property (readonly, nonatomic) char hasServiceProviderName;
@property (retain, nonatomic) NSString *serviceProviderName;
@property (nonatomic) char hasUniqueCount;
@property (nonatomic) char uniqueCount;
@property (nonatomic) char hasHasWifiFallback;
@property (nonatomic) char hasWifiFallback;

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
