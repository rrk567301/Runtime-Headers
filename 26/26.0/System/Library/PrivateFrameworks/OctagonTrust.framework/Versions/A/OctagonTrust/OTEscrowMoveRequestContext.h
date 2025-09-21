@class NSString;

@interface OTEscrowMoveRequestContext : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEscrowRecordLabel;
@property (retain, nonatomic) NSString *escrowRecordLabel;
@property (readonly, nonatomic) BOOL hasCurrentFederation;
@property (retain, nonatomic) NSString *currentFederation;
@property (readonly, nonatomic) BOOL hasIntendedFederation;
@property (retain, nonatomic) NSString *intendedFederation;

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
