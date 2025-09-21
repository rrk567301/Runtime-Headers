@class NSString, NSMutableArray;

@interface CPLFaceInstance : PBCodable <NSCopying> {
    struct { unsigned char bodyCenterX : 1; unsigned char bodyCenterY : 1; unsigned char bodyHeight : 1; unsigned char bodyWidth : 1; unsigned char centerX : 1; unsigned char centerY : 1; unsigned char size : 1; unsigned char detectionType : 1; unsigned char faceState : 1; unsigned char nameSource : 1; } _has;
}

@property (readonly, nonatomic, getter=isNoneState) char noneState;
@property (nonatomic, getter=isKeyFace) char keyFace;
@property (nonatomic, getter=isManual) char manual;
@property (readonly, nonatomic) char hasPersonIdentifier;
@property (retain, nonatomic) NSString *personIdentifier;
@property (nonatomic) char hasCenterX;
@property (nonatomic) double centerX;
@property (nonatomic) char hasCenterY;
@property (nonatomic) double centerY;
@property (nonatomic) char hasSize;
@property (nonatomic) double size;
@property (nonatomic) char hasFaceState;
@property (nonatomic) unsigned int faceState;
@property (retain, nonatomic) NSMutableArray *rejectedPersonIdentifiers;
@property (nonatomic) char hasNameSource;
@property (nonatomic) unsigned int nameSource;
@property (nonatomic) char hasDetectionType;
@property (nonatomic) unsigned int detectionType;
@property (nonatomic) char hasBodyCenterX;
@property (nonatomic) double bodyCenterX;
@property (nonatomic) char hasBodyCenterY;
@property (nonatomic) double bodyCenterY;
@property (nonatomic) char hasBodyWidth;
@property (nonatomic) double bodyWidth;
@property (nonatomic) char hasBodyHeight;
@property (nonatomic) double bodyHeight;

+ (Class)rejectedPersonIdentifiersType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearState;
- (char)isTorsoOnly;
- (id)pointerDescription;
- (void)_setFaceStateBit:(unsigned int)a0 fromBoolValue:(char)a1;
- (char)_isFaceStateBitSet:(unsigned int)a0;
- (void)addRejectedPersonIdentifiers:(id)a0;
- (void)clearRejectedPersonIdentifiers;
- (char)isPetDetectionType;
- (id)rejectedPersonIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)rejectedPersonIdentifiersCount;

@end
