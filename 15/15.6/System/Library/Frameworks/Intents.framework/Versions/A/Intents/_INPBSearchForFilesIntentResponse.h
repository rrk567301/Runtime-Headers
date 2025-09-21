@class NSArray, _INPBInteger, NSString, _INPBString;

@interface _INPBSearchForFilesIntentResponse : PBCodable <_INPBSearchForFilesIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char success : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *entities;
@property (readonly, nonatomic) unsigned long long entitiesCount;
@property (retain, nonatomic) _INPBInteger *numResults;
@property (readonly, nonatomic) char hasNumResults;
@property (retain, nonatomic) _INPBString *query;
@property (readonly, nonatomic) char hasQuery;
@property (nonatomic) char success;
@property (nonatomic) char hasSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)entitiesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addEntities:(id)a0;
- (void)clearEntities;
- (id)entitiesAtIndex:(unsigned long long)a0;

@end
