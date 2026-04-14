@class NSMutableArray;

@interface HMPBMetadata : PBCodable <NSCopying> {
    NSMutableArray *_hapCategories;
    NSMutableArray *_hapCharacteristics;
    NSMutableArray *_hapServices;
    int _version;
    struct { unsigned char version : 1; } _has;
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
