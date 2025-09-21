@class NSString, SGPoint, SGStructuredAddress;

@interface SGGeoPoi : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasUrl;
@property (retain, nonatomic) NSString *url;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasPrefGeocode;
@property (retain, nonatomic) SGPoint *prefGeocode;
@property (readonly, nonatomic) char hasAddress;
@property (retain, nonatomic) SGStructuredAddress *address;

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
