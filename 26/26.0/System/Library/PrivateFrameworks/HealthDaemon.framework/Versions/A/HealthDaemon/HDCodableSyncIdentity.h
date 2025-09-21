@class NSData, NSString;

@interface HDCodableSyncIdentity : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasHardwareIdentifier;
@property (retain, nonatomic) NSData *hardwareIdentifier;
@property (readonly, nonatomic) BOOL hasDatabaseIdentifier;
@property (retain, nonatomic) NSData *databaseIdentifier;
@property (readonly, nonatomic) BOOL hasInstanceDiscriminator;
@property (retain, nonatomic) NSString *instanceDiscriminator;

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
