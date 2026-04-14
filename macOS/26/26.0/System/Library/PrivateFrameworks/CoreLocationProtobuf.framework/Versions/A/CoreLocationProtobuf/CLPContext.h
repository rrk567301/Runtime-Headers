@class NSString;

@interface CLPContext : PBCodable <NSCopying> {
    struct { unsigned char type : 1; unsigned char workoutType : 1; unsigned char isDriving : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasIsDriving;
@property (nonatomic) BOOL isDriving;
@property (nonatomic) BOOL hasWorkoutType;
@property (nonatomic) int workoutType;
@property (readonly, nonatomic) BOOL hasBundleCategory;
@property (retain, nonatomic) NSString *bundleCategory;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
