@class NSString, CKDPIdentifier;

@interface CKDPDatabaseIdentifier : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *containerName;
@property (nonatomic) int databaseType;
@property (readonly, nonatomic) BOOL hasDatabaseOwnerId;
@property (retain, nonatomic) CKDPIdentifier *databaseOwnerId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsDatabaseType:(id)a0;
- (id)databaseTypeAsString:(int)a0;

@end
