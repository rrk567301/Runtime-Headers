@class NSMutableArray;

@interface HDCodableSampleOriginCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *devices;
@property (retain, nonatomic) NSMutableArray *contributors;

+ (Class)deviceType;
+ (Class)contributorType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)addDevice:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearDevices;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)devicesCount;
- (id)deviceAtIndex:(unsigned long long)a0;
- (void)addContributor:(id)a0;
- (void)clearContributors;
- (id)contributorAtIndex:(unsigned long long)a0;
- (unsigned long long)contributorsCount;

@end
