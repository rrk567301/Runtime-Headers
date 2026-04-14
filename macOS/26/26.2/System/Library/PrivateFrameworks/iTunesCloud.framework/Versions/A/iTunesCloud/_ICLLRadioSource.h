@class NSString, _ICLLRadioSeed;

@interface _ICLLRadioSource : PBCodable <NSCopying> {
    NSString *_featureName;
    _ICLLRadioSeed *_seed;
    NSString *_stationId;
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
