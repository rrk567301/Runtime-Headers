@class NSString, SGPoint, SGStructuredAddress;

@interface SGGeoPoi : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *url;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasPrefGeocode;
@property (retain, nonatomic) SGPoint *prefGeocode;
@property (readonly, nonatomic) BOOL hasAddress;
@property (retain, nonatomic) SGStructuredAddress *address;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
