@class NSArray, NSString, _INPBString;

@interface _INPBMoveFileIntentResponse : PBCodable <_INPBMoveFileIntentResponse, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _entityTypes;
    struct { unsigned char overwrite : 1; unsigned char success : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBString *destinationName;
@property (readonly, nonatomic) char hasDestinationName;
@property (copy, nonatomic) NSArray *entityNames;
@property (readonly, nonatomic) unsigned long long entityNamesCount;
@property (readonly, nonatomic) int *entityTypes;
@property (readonly, nonatomic) unsigned long long entityTypesCount;
@property (nonatomic) char overwrite;
@property (nonatomic) char hasOverwrite;
@property (retain, nonatomic) _INPBString *sourceName;
@property (readonly, nonatomic) char hasSourceName;
@property (nonatomic) char success;
@property (nonatomic) char hasSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)entityNameType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addEntityName:(id)a0;
- (void)clearEntityNames;
- (id)entityNameAtIndex:(unsigned long long)a0;
- (int)StringAsEntityTypes:(id)a0;
- (void)addEntityType:(int)a0;
- (void)clearEntityTypes;
- (int)entityTypeAtIndex:(unsigned long long)a0;
- (id)entityTypesAsString:(int)a0;
- (void)setEntityTypes:(int *)a0 count:(unsigned long long)a1;

@end
