@class NSMutableArray;

@interface NTPBPersonalizationWhitelist : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *defaultTags;
@property (retain, nonatomic) NSMutableArray *optionalTags;
@property (retain, nonatomic) NSMutableArray *disabledPortraitTags;

+ (Class)defaultTagsType;
+ (Class)optionalTagsType;
+ (Class)disabledPortraitTagsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearDefaultTags;
- (void)addDefaultTags:(id)a0;
- (unsigned long long)defaultTagsCount;
- (id)defaultTagsAtIndex:(unsigned long long)a0;
- (void)clearOptionalTags;
- (void)addOptionalTags:(id)a0;
- (unsigned long long)optionalTagsCount;
- (id)optionalTagsAtIndex:(unsigned long long)a0;
- (void)clearDisabledPortraitTags;
- (void)addDisabledPortraitTags:(id)a0;
- (unsigned long long)disabledPortraitTagsCount;
- (id)disabledPortraitTagsAtIndex:(unsigned long long)a0;

@end
