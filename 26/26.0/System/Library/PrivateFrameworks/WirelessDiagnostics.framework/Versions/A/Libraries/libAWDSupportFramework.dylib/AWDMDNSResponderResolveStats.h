@class NSMutableArray;

@interface AWDMDNSResponderResolveStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *servers;
@property (retain, nonatomic) NSMutableArray *domains;

+ (Class)serverType;
+ (Class)domainType;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addServer:(id)a0;
- (void)writeTo:(id)a0;
- (void)addDomain:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)clearDomains;
- (void)clearServers;
- (id)domainAtIndex:(unsigned long long)a0;
- (unsigned long long)domainsCount;
- (id)serverAtIndex:(unsigned long long)a0;
- (unsigned long long)serversCount;

@end
