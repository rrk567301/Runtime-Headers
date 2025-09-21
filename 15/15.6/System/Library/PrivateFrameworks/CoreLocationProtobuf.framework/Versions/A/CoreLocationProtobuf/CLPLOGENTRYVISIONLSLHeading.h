@class CLPLOGENTRYVISIONTimeStamp, CLPLOGENTRYVISIONSimdDoubleMxN, CLPLOGENTRYVISIONLSLLocation, CLPLOGENTRYVISIONSimdDoubleM, CLPLOGENTRYVISIONLSLHeadingSupplInfo;

@interface CLPLOGENTRYVISIONLSLHeading : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; unsigned char globalReferenceFrame : 1; } _has;
}

@property (readonly, nonatomic) char hasTimestamp;
@property (retain, nonatomic) CLPLOGENTRYVISIONTimeStamp *timestamp;
@property (readonly, nonatomic) char hasRotationFromGlobalToDeviceFrame;
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdDoubleMxN *rotationFromGlobalToDeviceFrame;
@property (readonly, nonatomic) char hasRotationFromGlobalToCameraFrame;
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdDoubleMxN *rotationFromGlobalToCameraFrame;
@property (readonly, nonatomic) char hasRotationalAccuracyInRadians;
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdDoubleM *rotationalAccuracyInRadians;
@property (nonatomic) char hasConfidence;
@property (nonatomic) double confidence;
@property (nonatomic) char hasGlobalReferenceFrame;
@property (nonatomic) int globalReferenceFrame;
@property (readonly, nonatomic) char hasLocation;
@property (retain, nonatomic) CLPLOGENTRYVISIONLSLLocation *location;
@property (readonly, nonatomic) char hasSupplemantaryInfo;
@property (retain, nonatomic) CLPLOGENTRYVISIONLSLHeadingSupplInfo *supplemantaryInfo;

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
- (int)StringAsGlobalReferenceFrame:(id)a0;
- (id)globalReferenceFrameAsString:(int)a0;

@end
