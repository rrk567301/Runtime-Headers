@class NSMutableArray;

@interface HDCodableSampleOriginCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *devices;
@property (retain, nonatomic) NSMutableArray *contributors;

+ (Class)deviceType;
+ (Class)contributorType;

- (void)addDevice:(id)a0;
- (void)copyTo:(id)a0;
- (void)clearDevices;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)devicesCount;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)deviceAtIndex:(unsigned long long)a0;
- (void)addContributor:(id)a0;
- (void)clearContributors;
- (id)contributorAtIndex:(unsigned long long)a0;
- (unsigned long long)contributorsCount;

@end
