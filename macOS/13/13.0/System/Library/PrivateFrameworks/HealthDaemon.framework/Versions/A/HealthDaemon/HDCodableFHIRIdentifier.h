@class NSString;

@interface HDCodableFHIRIdentifier : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasResourceType;
@property (retain, nonatomic) NSString *resourceType;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
