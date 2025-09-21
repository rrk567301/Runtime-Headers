@class _INPBPrivateMediaItemValueData, NSString, NSArray, _INPBImageValue, _INPBValueMetadata;

@interface _INPBMediaItemValue : PBCodable <_INPBMediaItemValue, NSSecureCoding, NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *artist;
@property (readonly, nonatomic) char hasArtist;
@property (retain, nonatomic) _INPBImageValue *artwork;
@property (readonly, nonatomic) char hasArtwork;
@property (copy, nonatomic) NSString *assetInfo;
@property (readonly, nonatomic) char hasAssetInfo;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasIdentifier;
@property (copy, nonatomic) NSArray *namedEntities;
@property (readonly, nonatomic) unsigned long long namedEntitiesCount;
@property (retain, nonatomic) _INPBPrivateMediaItemValueData *privateMediaItemValueData;
@property (readonly, nonatomic) char hasPrivateMediaItemValueData;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasTitle;
@property (copy, nonatomic) NSArray *topics;
@property (readonly, nonatomic) unsigned long long topicsCount;
@property (nonatomic) int type;
@property (nonatomic) char hasType;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (readonly, nonatomic) char hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)namedEntitiesType;
+ (Class)topicsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)addNamedEntities:(id)a0;
- (void)addTopics:(id)a0;
- (void)clearNamedEntities;
- (void)clearTopics;
- (id)namedEntitiesAtIndex:(unsigned long long)a0;
- (id)topicsAtIndex:(unsigned long long)a0;

@end
