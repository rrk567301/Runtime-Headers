@class NSMutableArray;

@interface NTPBPersonalizationWhitelist : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *defaultTags;
@property (retain, nonatomic) NSMutableArray *optionalTags;
@property (retain, nonatomic) NSMutableArray *disabledPortraitTags;

+ (Class)disabledPortraitTagsType;
+ (Class)defaultTagsType;
+ (Class)optionalTagsType;

- (id)disabledPortraitTagsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)defaultTagsAtIndex:(unsigned long long)a0;
- (void)addDefaultTags:(id)a0;
- (unsigned long long)disabledPortraitTagsCount;
- (void)addDisabledPortraitTags:(id)a0;
- (id)description;
- (void)clearDefaultTags;
- (unsigned long long)defaultTagsCount;
- (void)addOptionalTags:(id)a0;
- (void)clearOptionalTags;
- (void)clearDisabledPortraitTags;
- (void).cxx_destruct;
- (unsigned long long)optionalTagsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)optionalTagsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
