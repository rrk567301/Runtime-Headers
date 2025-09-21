@class NSString;

@interface CKCDPInitializeContainerRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) char hasContainerName;
@property (retain, nonatomic) NSString *containerName;
@property (readonly, nonatomic) char hasPath;
@property (retain, nonatomic) NSString *path;
@property (readonly, nonatomic) char hasEnvironment;
@property (retain, nonatomic) NSString *environment;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
