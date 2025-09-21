@class NSString;

@interface CKCDPStopContainerRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasContainerName;
@property (retain, nonatomic) NSString *containerName;
@property (readonly, nonatomic) BOOL hasEnvironment;
@property (retain, nonatomic) NSString *environment;

- (Class)responseClass;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
