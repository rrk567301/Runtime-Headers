@class NSString;

@interface C2MPServerInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL hasPartition;
@property (retain, nonatomic) NSString *partition;
@property (readonly, nonatomic) BOOL hasServiceBuild;
@property (retain, nonatomic) NSString *serviceBuild;
@property (readonly, nonatomic) BOOL hasServiceInstance;
@property (retain, nonatomic) NSString *serviceInstance;

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
