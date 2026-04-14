@class NSString;

@interface OTEscrowMoveRequestContext : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEscrowRecordLabel;
@property (retain, nonatomic) NSString *escrowRecordLabel;
@property (readonly, nonatomic) BOOL hasCurrentFederation;
@property (retain, nonatomic) NSString *currentFederation;
@property (readonly, nonatomic) BOOL hasIntendedFederation;
@property (retain, nonatomic) NSString *intendedFederation;

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
