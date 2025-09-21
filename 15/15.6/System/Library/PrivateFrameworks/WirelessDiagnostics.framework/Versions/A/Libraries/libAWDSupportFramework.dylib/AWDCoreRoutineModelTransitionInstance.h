@class AWDCoreRoutineTransitionMotionType;

@interface AWDCoreRoutineModelTransitionInstance : PBCodable <NSCopying> {
    struct { unsigned char distance : 1; unsigned char duration : 1; } _has;
}

@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) char hasDistance;
@property (nonatomic) unsigned int distance;
@property (readonly, nonatomic) char hasTransitionHistogram;
@property (retain, nonatomic) AWDCoreRoutineTransitionMotionType *transitionHistogram;

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

@end
