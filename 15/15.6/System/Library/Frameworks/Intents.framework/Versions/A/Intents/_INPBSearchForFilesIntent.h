@class NSArray, NSString, _INPBString, _INPBIntentMetadata;

@interface _INPBSearchForFilesIntent : PBCodable <_INPBSearchForFilesIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char entityType : 1; unsigned char scope : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBString *appId;
@property (readonly, nonatomic) char hasAppId;
@property (retain, nonatomic) _INPBString *entityName;
@property (readonly, nonatomic) char hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) char hasEntityType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (copy, nonatomic) NSArray *properties;
@property (readonly, nonatomic) unsigned long long propertiesCount;
@property (nonatomic) int scope;
@property (nonatomic) char hasScope;
@property (retain, nonatomic) _INPBString *scopeEntityName;
@property (readonly, nonatomic) char hasScopeEntityName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)propertiesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)clearProperties;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addProperties:(id)a0;
- (id)propertiesAtIndex:(unsigned long long)a0;
- (int)StringAsEntityType:(id)a0;
- (int)StringAsScope:(id)a0;
- (id)entityTypeAsString:(int)a0;
- (id)scopeAsString:(int)a0;

@end
