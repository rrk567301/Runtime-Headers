@class NSString;

@interface CKCDPCheckContainerHealthRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasContainerName;
@property (retain, nonatomic) NSString *containerName;
@property (readonly, nonatomic) BOOL hasEnvironment;
@property (retain, nonatomic) NSString *environment;

- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
