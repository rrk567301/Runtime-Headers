@class NSString, _ICLLRadioSeed;

@interface _ICLLRadioSource : PBCodable <NSCopying> {
    NSString *_featureName;
    _ICLLRadioSeed *_seed;
    NSString *_stationId;
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
