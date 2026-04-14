@class NSString;

@interface ADRoutingInfoMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *searchType;
@property (retain, nonatomic) NSString *environmentURL;
@property (retain, nonatomic) NSString *protoVersion;

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

@end
