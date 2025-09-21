@class NSString;

@interface CKDPThrottlingConfigCriteria : PBCodable <NSCopying> {
    struct { unsigned char containerEnvironment : 1; unsigned char databaseType : 1; unsigned char operationType : 1; } _has;
}

@property (readonly, nonatomic) char hasContainerName;
@property (retain, nonatomic) NSString *containerName;
@property (nonatomic) char hasContainerEnvironment;
@property (nonatomic) int containerEnvironment;
@property (nonatomic) char hasOperationType;
@property (nonatomic) int operationType;
@property (nonatomic) char hasDatabaseType;
@property (nonatomic) int databaseType;
@property (readonly, nonatomic) char hasZoneName;
@property (retain, nonatomic) NSString *zoneName;
@property (readonly, nonatomic) char hasOperationGroupName;
@property (retain, nonatomic) NSString *operationGroupName;
@property (readonly, nonatomic) char hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) char hasInvernessServiceName;
@property (retain, nonatomic) NSString *invernessServiceName;
@property (readonly, nonatomic) char hasInvernessFunctionName;
@property (retain, nonatomic) NSString *invernessFunctionName;

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
- (int)StringAsDatabaseType:(id)a0;
- (id)databaseTypeAsString:(int)a0;
- (int)StringAsOperationType:(id)a0;
- (id)operationTypeAsString:(int)a0;
- (int)StringAsContainerEnvironment:(id)a0;
- (id)containerEnvironmentAsString:(int)a0;

@end
