@class NSMutableArray;

@interface HMPBMetadata : PBCodable <NSCopying> {
    NSMutableArray *_hapCategories;
    NSMutableArray *_hapCharacteristics;
    NSMutableArray *_hapServices;
    int _version;
    struct { unsigned char version : 1; } _has;
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
