@class NSString;

@interface HMPBMetadataCategory : PBCodable <NSCopying> {
    NSString *_catDescription;
    int _identifier;
    NSString *_uuidStr;
    struct { unsigned char identifier : 1; } _has;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
