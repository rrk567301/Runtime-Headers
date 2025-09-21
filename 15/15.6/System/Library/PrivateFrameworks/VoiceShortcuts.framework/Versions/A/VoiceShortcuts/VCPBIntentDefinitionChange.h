@class NSString, VCPBIntentDefinition;

@interface VCPBIntentDefinitionChange : PBCodable <NSCopying>

@property (nonatomic) int changeType;
@property (retain, nonatomic) NSString *associatedBundleID;
@property (readonly, nonatomic) char hasIntentDefinition;
@property (retain, nonatomic) VCPBIntentDefinition *intentDefinition;

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
- (int)StringAsChangeType:(id)a0;
- (id)changeTypeAsString:(int)a0;

@end
