@class NSMutableArray;

@interface CPLFaceAnalysis : PBCodable <NSCopying> {
    struct { unsigned char completed : 1; } _has;
}

@property (nonatomic) char hasCompleted;
@property (nonatomic) char completed;
@property (retain, nonatomic) NSMutableArray *faceInstances;
@property (retain, nonatomic) NSMutableArray *petFaceInstances;
@property (retain, nonatomic) NSMutableArray *torsoFaceInstances;

+ (Class)faceInstancesType;
+ (Class)petFaceInstancesType;
+ (Class)torsoFaceInstancesType;

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
- (void)addFaceInstances:(id)a0;
- (void)addPetFaceInstances:(id)a0;
- (void)addTorsoFaceInstances:(id)a0;
- (void)clearFaceInstances;
- (void)clearPetFaceInstances;
- (void)clearTorsoFaceInstances;
- (id)faceInstancesAtIndex:(unsigned long long)a0;
- (unsigned long long)faceInstancesCount;
- (id)petFaceInstancesAtIndex:(unsigned long long)a0;
- (unsigned long long)petFaceInstancesCount;
- (id)torsoFaceInstancesAtIndex:(unsigned long long)a0;
- (unsigned long long)torsoFaceInstancesCount;

@end
