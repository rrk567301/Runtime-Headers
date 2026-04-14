@class NSString;

@interface CKCDPCodeServiceRequestOperationGroup : PBCodable <NSCopying> {
    struct { unsigned char operationGroupQuantity : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasOperationId;
@property (retain, nonatomic) NSString *operationId;
@property (readonly, nonatomic) BOOL hasOperationGroupId;
@property (retain, nonatomic) NSString *operationGroupId;
@property (readonly, nonatomic) BOOL hasOperationGroupName;
@property (retain, nonatomic) NSString *operationGroupName;
@property (nonatomic) BOOL hasOperationGroupQuantity;
@property (nonatomic) long long operationGroupQuantity;

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
