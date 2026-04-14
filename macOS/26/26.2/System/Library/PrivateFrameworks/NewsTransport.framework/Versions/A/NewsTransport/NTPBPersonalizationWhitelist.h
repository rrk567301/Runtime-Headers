@class NSMutableArray;

@interface NTPBPersonalizationWhitelist : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *defaultTags;
@property (retain, nonatomic) NSMutableArray *optionalTags;
@property (retain, nonatomic) NSMutableArray *disabledPortraitTags;

+ (Class)optionalTagsType;
+ (Class)defaultTagsType;
+ (Class)disabledPortraitTagsType;

- (id)optionalTagsAtIndex:(unsigned long long)a0;
- (unsigned long long)disabledPortraitTagsCount;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)optionalTagsCount;
- (void)clearOptionalTags;
- (BOOL)readFrom:(id)a0;
- (void)addDisabledPortraitTags:(id)a0;
- (id)description;
- (id)defaultTagsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)disabledPortraitTagsAtIndex:(unsigned long long)a0;
- (void)addOptionalTags:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearDisabledPortraitTags;
- (void)clearDefaultTags;
- (unsigned long long)defaultTagsCount;
- (void)addDefaultTags:(id)a0;

@end
