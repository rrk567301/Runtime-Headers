@class NSString;

@interface C2MPCloudKitOperationGroupInfo : PBCodable <NSCopying> {
    struct { unsigned char operationGroupTriggered : 1; } _has;
}

@property (readonly, nonatomic) char hasOperationGroupId;
@property (retain, nonatomic) NSString *operationGroupId;
@property (readonly, nonatomic) char hasOperationGroupName;
@property (retain, nonatomic) NSString *operationGroupName;
@property (nonatomic) char hasOperationGroupTriggered;
@property (nonatomic) char operationGroupTriggered;

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
