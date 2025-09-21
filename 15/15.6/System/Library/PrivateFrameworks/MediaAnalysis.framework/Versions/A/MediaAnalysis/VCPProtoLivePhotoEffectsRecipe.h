@class VCPProtoLivePhotoVariationParams, NSMutableArray;

@interface VCPProtoLivePhotoEffectsRecipe : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {
    struct { unsigned char epoch : 1; unsigned char flags : 1; } _has;
}

@property (nonatomic) int stabilizeResult;
@property (nonatomic) long long outputFrameDurValue;
@property (nonatomic) int cropRectX;
@property (nonatomic) int cropRectY;
@property (nonatomic) int cropRectHeight;
@property (nonatomic) int cropRectWidth;
@property (nonatomic) int timeScale;
@property (nonatomic) char hasEpoch;
@property (nonatomic) long long epoch;
@property (nonatomic) char hasFlags;
@property (nonatomic) int flags;
@property (retain, nonatomic) NSMutableArray *frameInstructions;
@property (retain, nonatomic) VCPProtoLivePhotoVariationParams *autoloop;
@property (retain, nonatomic) VCPProtoLivePhotoVariationParams *bounce;
@property (retain, nonatomic) VCPProtoLivePhotoVariationParams *longexposure;
@property (retain, nonatomic) VCPProtoLivePhotoVariationParams *stabilize;
@property (nonatomic) int minVersion;
@property (nonatomic) int version;

+ (Class)frameInstructionsType;
+ (id)resultFromLegacyDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addFrameInstructions:(id)a0;
- (void)clearFrameInstructions;
- (id)exportToLegacyDictionary;
- (id)exportToLegacyDictionaryFromFrameInstruction:(id)a0;
- (id)exportToLegacyDictionaryFromParam:(id)a0 withLoopFlavor:(id)a1;
- (id)frameInstructionsAtIndex:(unsigned long long)a0;
- (unsigned long long)frameInstructionsCount;

@end
