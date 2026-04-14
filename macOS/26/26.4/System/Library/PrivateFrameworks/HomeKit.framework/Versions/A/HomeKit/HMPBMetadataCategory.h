@class NSString;

@interface HMPBMetadataCategory : PBCodable <NSCopying> {
    NSString *_catDescription;
    int _identifier;
    NSString *_uuidStr;
    struct { unsigned char identifier : 1; } _has;
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
