@class NSString;

@interface HMPBMetadataCharacteristic : PBCodable <NSCopying> {
    NSString *_chrDescription;
    NSString *_uuidStr;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
