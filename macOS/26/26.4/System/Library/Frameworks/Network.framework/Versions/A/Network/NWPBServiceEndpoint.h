@class NSString;

@interface NWPBServiceEndpoint : PBCodable <NSCopying> {
    NSString *_domain;
    NSString *_name;
    NSString *_type;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
