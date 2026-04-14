@class NSString, VCPBIntentDefinition;

@interface VCPBIntentDefinitionChange : PBCodable <NSCopying>

@property (nonatomic) int changeType;
@property (retain, nonatomic) NSString *associatedBundleID;
@property (readonly, nonatomic) BOOL hasIntentDefinition;
@property (retain, nonatomic) VCPBIntentDefinition *intentDefinition;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)StringAsChangeType:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)changeTypeAsString:(int)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
