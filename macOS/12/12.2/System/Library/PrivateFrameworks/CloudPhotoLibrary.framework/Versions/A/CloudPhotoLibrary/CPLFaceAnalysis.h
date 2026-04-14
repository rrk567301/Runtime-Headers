@class NSMutableArray;

@interface CPLFaceAnalysis : PBCodable <NSCopying> {
    struct { unsigned char completed : 1; } _has;
}

@property (nonatomic) BOOL hasCompleted;
@property (nonatomic) BOOL completed;
@property (retain, nonatomic) NSMutableArray *faceInstances;

+ (Class)faceInstancesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)clearFaceInstances;
- (void)addFaceInstances:(id)a0;
- (unsigned long long)faceInstancesCount;
- (id)faceInstancesAtIndex:(unsigned long long)a0;

@end
