@class NSString, CKDPIdentifier;

@interface CKDPDatabaseIdentifier : PBCodable <NSCopying> {
    struct { unsigned char containerType : 1; unsigned char databaseType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasContainerName;
@property (retain, nonatomic) NSString *containerName;
@property (nonatomic) BOOL hasDatabaseType;
@property (nonatomic) int databaseType;
@property (readonly, nonatomic) BOOL hasDatabaseOwnerId;
@property (retain, nonatomic) CKDPIdentifier *databaseOwnerId;
@property (nonatomic) BOOL hasContainerType;
@property (nonatomic) int containerType;

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
- (int)StringAsDatabaseType:(id)a0;
- (id)databaseTypeAsString:(int)a0;
- (int)StringAsContainerType:(id)a0;
- (id)containerTypeAsString:(int)a0;

@end
