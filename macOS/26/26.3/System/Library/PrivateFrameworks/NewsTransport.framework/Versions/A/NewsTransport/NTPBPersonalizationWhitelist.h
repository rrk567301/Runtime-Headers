@class NSMutableArray;

@interface NTPBPersonalizationWhitelist : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *defaultTags;
@property (retain, nonatomic) NSMutableArray *optionalTags;
@property (retain, nonatomic) NSMutableArray *disabledPortraitTags;

+ (Class)optionalTagsType;
+ (Class)defaultTagsType;
+ (Class)disabledPortraitTagsType;

- (unsigned long long)disabledPortraitTagsCount;
- (id)dictionaryRepresentation;
- (id)defaultTagsAtIndex:(unsigned long long)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (unsigned long long)defaultTagsCount;
- (void)addDisabledPortraitTags:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addDefaultTags:(id)a0;
- (id)disabledPortraitTagsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (void)clearDisabledPortraitTags;
- (void).cxx_destruct;
- (void)clearOptionalTags;
- (void)clearDefaultTags;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)optionalTagsCount;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addOptionalTags:(id)a0;
- (id)optionalTagsAtIndex:(unsigned long long)a0;

@end
