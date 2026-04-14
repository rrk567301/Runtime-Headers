@class NSString;

@interface HMPBMetadataCategory : PBCodable <NSCopying> {
    NSString *_catDescription;
    int _identifier;
    NSString *_uuidStr;
    struct { unsigned char identifier : 1; } _has;
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
