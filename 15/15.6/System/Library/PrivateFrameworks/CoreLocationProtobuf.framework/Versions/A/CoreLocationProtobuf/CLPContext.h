@class NSString;

@interface CLPContext : PBCodable <NSCopying> {
    struct { unsigned char type : 1; unsigned char workoutType : 1; unsigned char isDriving : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasIsDriving;
@property (nonatomic) char isDriving;
@property (nonatomic) char hasWorkoutType;
@property (nonatomic) int workoutType;
@property (readonly, nonatomic) char hasBundleCategory;
@property (retain, nonatomic) NSString *bundleCategory;

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
