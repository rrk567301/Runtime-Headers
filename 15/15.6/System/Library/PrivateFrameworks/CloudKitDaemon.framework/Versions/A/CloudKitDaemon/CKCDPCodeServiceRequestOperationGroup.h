@class NSString;

@interface CKCDPCodeServiceRequestOperationGroup : PBCodable <NSCopying> {
    struct { unsigned char operationGroupQuantity : 1; } _has;
}

@property (readonly, nonatomic) char hasOperationId;
@property (retain, nonatomic) NSString *operationId;
@property (readonly, nonatomic) char hasOperationGroupId;
@property (retain, nonatomic) NSString *operationGroupId;
@property (readonly, nonatomic) char hasOperationGroupName;
@property (retain, nonatomic) NSString *operationGroupName;
@property (nonatomic) char hasOperationGroupQuantity;
@property (nonatomic) long long operationGroupQuantity;

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
