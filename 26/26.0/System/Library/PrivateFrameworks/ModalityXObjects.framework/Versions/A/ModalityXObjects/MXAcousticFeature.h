@interface MXAcousticFeature : PBCodable <NSCopying> {
    struct { float *list; unsigned long long count; unsigned long long size; } _acousticFeaturePerFrames;
    struct { unsigned char frameDuration : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long acousticFeaturePerFramesCount;
@property (readonly, nonatomic) float *acousticFeaturePerFrames;
@property (nonatomic) BOOL hasFrameDuration;
@property (nonatomic) float frameDuration;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (float)acousticFeaturePerFrameAtIndex:(unsigned long long)a0;
- (void)addAcousticFeaturePerFrame:(float)a0;
- (void)clearAcousticFeaturePerFrames;
- (void)setAcousticFeaturePerFrames:(float *)a0 count:(unsigned long long)a1;

@end
