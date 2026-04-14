@class NSString;

@interface NWPBServiceEndpoint : PBCodable <NSCopying> {
    NSString *_domain;
    NSString *_name;
    NSString *_type;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
