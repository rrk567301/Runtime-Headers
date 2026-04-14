@class NSData, NSString;

@interface HDCodableSyncIdentity : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasHardwareIdentifier;
@property (retain, nonatomic) NSData *hardwareIdentifier;
@property (readonly, nonatomic) BOOL hasDatabaseIdentifier;
@property (retain, nonatomic) NSData *databaseIdentifier;
@property (readonly, nonatomic) BOOL hasInstanceDiscriminator;
@property (retain, nonatomic) NSString *instanceDiscriminator;

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
