@class NSMutableArray;

@interface HDCodableSampleOriginCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *devices;
@property (retain, nonatomic) NSMutableArray *contributors;

+ (Class)deviceType;
+ (Class)contributorType;

- (void)addDevice:(id)a0;
- (void)clearDevices;
- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)devicesCount;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)deviceAtIndex:(unsigned long long)a0;
- (void)addContributor:(id)a0;
- (void)clearContributors;
- (id)contributorAtIndex:(unsigned long long)a0;
- (unsigned long long)contributorsCount;

@end
