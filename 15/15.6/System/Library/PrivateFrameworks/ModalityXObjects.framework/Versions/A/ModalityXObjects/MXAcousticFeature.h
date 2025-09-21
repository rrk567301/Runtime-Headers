@interface MXAcousticFeature : PBCodable <NSCopying> {
    struct { float *list; unsigned long long count; unsigned long long size; } _acousticFeaturePerFrames;
    struct { unsigned char frameDuration : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long acousticFeaturePerFramesCount;
@property (readonly, nonatomic) float *acousticFeaturePerFrames;
@property (nonatomic) char hasFrameDuration;
@property (nonatomic) float frameDuration;

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
- (float)acousticFeaturePerFrameAtIndex:(unsigned long long)a0;
- (void)addAcousticFeaturePerFrame:(float)a0;
- (void)clearAcousticFeaturePerFrames;
- (void)setAcousticFeaturePerFrames:(float *)a0 count:(unsigned long long)a1;

@end
