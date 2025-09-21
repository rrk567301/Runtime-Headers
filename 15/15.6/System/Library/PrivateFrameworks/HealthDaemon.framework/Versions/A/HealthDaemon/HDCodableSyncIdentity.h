@class NSData, NSString;

@interface HDCodableSyncIdentity : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasHardwareIdentifier;
@property (retain, nonatomic) NSData *hardwareIdentifier;
@property (readonly, nonatomic) char hasDatabaseIdentifier;
@property (retain, nonatomic) NSData *databaseIdentifier;
@property (readonly, nonatomic) char hasInstanceDiscriminator;
@property (retain, nonatomic) NSString *instanceDiscriminator;

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
