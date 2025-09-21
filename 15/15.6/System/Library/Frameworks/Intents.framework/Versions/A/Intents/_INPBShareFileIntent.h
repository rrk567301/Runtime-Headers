@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBShareFileIntent : PBCodable <_INPBShareFileIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char shareMode : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *entityNames;
@property (readonly, nonatomic) unsigned long long entityNamesCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) unsigned long long recipientsCount;
@property (nonatomic) int shareMode;
@property (nonatomic) char hasShareMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)entityNameType;
+ (Class)recipientsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addRecipients:(id)a0;
- (void)addEntityName:(id)a0;
- (void)clearEntityNames;
- (id)entityNameAtIndex:(unsigned long long)a0;
- (void)clearRecipients;
- (int)StringAsShareMode:(id)a0;
- (id)recipientsAtIndex:(unsigned long long)a0;
- (id)shareModeAsString:(int)a0;

@end
