@class NSArray, NSString, _INPBString, _INPBIntentMetadata;

@interface _INPBMoveFileIntent : PBCodable <_INPBMoveFileIntent, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _entityTypes;
    struct { unsigned char destinationType : 1; unsigned char sourceType : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBString *destinationName;
@property (readonly, nonatomic) char hasDestinationName;
@property (nonatomic) int destinationType;
@property (nonatomic) char hasDestinationType;
@property (copy, nonatomic) NSArray *entityNames;
@property (readonly, nonatomic) unsigned long long entityNamesCount;
@property (readonly, nonatomic) int *entityTypes;
@property (readonly, nonatomic) unsigned long long entityTypesCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (copy, nonatomic) NSArray *properties;
@property (readonly, nonatomic) unsigned long long propertiesCount;
@property (retain, nonatomic) _INPBString *sourceName;
@property (readonly, nonatomic) char hasSourceName;
@property (nonatomic) int sourceType;
@property (nonatomic) char hasSourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)propertiesType;
+ (Class)entityNameType;

- (void)dealloc;
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
- (int)StringAsDestinationType:(id)a0;
- (void)addEntityName:(id)a0;
- (void)clearEntityNames;
- (id)destinationTypeAsString:(int)a0;
- (id)entityNameAtIndex:(unsigned long long)a0;
- (int)StringAsSourceType:(id)a0;
- (int)StringAsEntityTypes:(id)a0;
- (void)addEntityType:(int)a0;
- (void)clearEntityTypes;
- (int)entityTypeAtIndex:(unsigned long long)a0;
- (id)entityTypesAsString:(int)a0;
- (void)setEntityTypes:(int *)a0 count:(unsigned long long)a1;
- (id)sourceTypeAsString:(int)a0;

@end
