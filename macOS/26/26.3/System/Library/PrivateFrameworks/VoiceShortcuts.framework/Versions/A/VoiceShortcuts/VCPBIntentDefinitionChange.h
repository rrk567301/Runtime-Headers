@class NSString, VCPBIntentDefinition;

@interface VCPBIntentDefinitionChange : PBCodable <NSCopying>

@property (nonatomic) int changeType;
@property (retain, nonatomic) NSString *associatedBundleID;
@property (readonly, nonatomic) BOOL hasIntentDefinition;
@property (retain, nonatomic) VCPBIntentDefinition *intentDefinition;

- (id)dictionaryRepresentation;
- (id)changeTypeAsString:(int)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (int)StringAsChangeType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
