@interface TRITrialCloudKitContainerOriginFields : PBCodable <NSCopying> {
    struct { unsigned char ckContainer : 1; unsigned char ckEnvironment : 1; } _has;
}

@property (nonatomic) BOOL hasCkEnvironment;
@property (nonatomic) int ckEnvironment;
@property (nonatomic) BOOL hasCkContainer;
@property (nonatomic) int ckContainer;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)ckEnvironmentAsString:(int)a0;
- (int)StringAsCkEnvironment:(id)a0;
- (id)ckContainerAsString:(int)a0;
- (int)StringAsCkContainer:(id)a0;

@end
