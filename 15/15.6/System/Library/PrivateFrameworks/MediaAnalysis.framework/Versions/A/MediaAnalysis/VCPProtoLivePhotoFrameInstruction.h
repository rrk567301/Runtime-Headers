@interface VCPProtoLivePhotoFrameInstruction : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {
    struct { float *list; unsigned long long count; unsigned long long size; } _homographyParams;
}

@property (nonatomic) long long timeValue;
@property (readonly, nonatomic) unsigned long long homographyParamsCount;
@property (readonly, nonatomic) float *homographyParams;
@property (nonatomic) int timeScale;
@property (nonatomic) long long epoch;
@property (nonatomic) int flags;

+ (id)resultFromLegacyDictionary:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addHomographyParam:(float)a0;
- (void)clearHomographyParams;
- (id)exportToLegacyDictionary;
- (float)homographyParamAtIndex:(unsigned long long)a0;
- (void)setHomographyParams:(float *)a0 count:(unsigned long long)a1;

@end
