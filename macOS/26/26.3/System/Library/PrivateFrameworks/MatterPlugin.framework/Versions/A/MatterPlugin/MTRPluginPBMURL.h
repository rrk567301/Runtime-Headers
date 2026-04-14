@class NSURL, NSString;

@interface MTRPluginPBMURL : PBCodable <NSCopying>

@property (retain, nonatomic) NSURL *url;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSString *value;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (id)initWithURL:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
