@class NSMutableArray;

@interface NPKProtoAddPendingProvisioningRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *pendingProvisionings;

+ (Class)pendingProvisioningType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addPendingProvisioning:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)clearPendingProvisionings;
- (id)pendingProvisioningAtIndex:(unsigned long long)a0;
- (unsigned long long)pendingProvisioningsCount;

@end
