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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
