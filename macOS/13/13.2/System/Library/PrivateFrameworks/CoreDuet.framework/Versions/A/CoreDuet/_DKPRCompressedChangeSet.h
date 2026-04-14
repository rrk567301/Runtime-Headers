@class NSData;

@interface _DKPRCompressedChangeSet : PBCodable <NSCopying> {
    unsigned long long _uncompressedLength;
    NSData *_compressedData;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
