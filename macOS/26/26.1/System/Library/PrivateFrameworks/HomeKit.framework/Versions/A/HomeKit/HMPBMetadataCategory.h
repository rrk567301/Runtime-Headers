@class NSString;

@interface HMPBMetadataCategory : PBCodable <NSCopying> {
    NSString *_catDescription;
    int _identifier;
    NSString *_uuidStr;
    struct { unsigned char identifier : 1; } _has;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
