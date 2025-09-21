@class NSString;

@interface C2MPServerInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) char hasPartition;
@property (retain, nonatomic) NSString *partition;
@property (readonly, nonatomic) char hasServiceBuild;
@property (retain, nonatomic) NSString *serviceBuild;
@property (readonly, nonatomic) char hasServiceInstance;
@property (retain, nonatomic) NSString *serviceInstance;

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
