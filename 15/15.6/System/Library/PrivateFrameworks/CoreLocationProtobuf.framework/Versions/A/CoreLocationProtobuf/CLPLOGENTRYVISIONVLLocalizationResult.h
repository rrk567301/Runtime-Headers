@class CLPLOGENTRYVISIONTimeStamp, CLPLOGENTRYVISIONSimdDoubleMxN, CLPLOGENTRYVISIONVLMatrixfMxN, CLPLOGENTRYVISIONVLLocalizationDebugInfo, CLPLOGENTRYVISIONVLLocation;

@interface CLPLOGENTRYVISIONVLLocalizationResult : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; } _has;
}

@property (readonly, nonatomic) char hasTimestamp;
@property (retain, nonatomic) CLPLOGENTRYVISIONTimeStamp *timestamp;
@property (readonly, nonatomic) char hasLocation;
@property (retain, nonatomic) CLPLOGENTRYVISIONVLLocation *location;
@property (readonly, nonatomic) char hasTransform;
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdDoubleMxN *transform;
@property (readonly, nonatomic) char hasCovariance;
@property (retain, nonatomic) CLPLOGENTRYVISIONVLMatrixfMxN *covariance;
@property (nonatomic) char hasConfidence;
@property (nonatomic) float confidence;
@property (readonly, nonatomic) char hasDebugInfo;
@property (retain, nonatomic) CLPLOGENTRYVISIONVLLocalizationDebugInfo *debugInfo;

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

@end
