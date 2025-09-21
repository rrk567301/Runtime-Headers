@class NSString;

@interface C2MPCloudKitOperationInfo : PBCodable <NSCopying> {
    struct { unsigned char operationGroupIndex : 1; unsigned char operationTriggered : 1; } _has;
}

@property (readonly, nonatomic) char hasOperationId;
@property (retain, nonatomic) NSString *operationId;
@property (readonly, nonatomic) char hasOperationType;
@property (retain, nonatomic) NSString *operationType;
@property (nonatomic) char hasOperationTriggered;
@property (nonatomic) char operationTriggered;
@property (nonatomic) char hasOperationGroupIndex;
@property (nonatomic) unsigned int operationGroupIndex;

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
