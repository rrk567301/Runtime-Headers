@interface NTPBSectionSlotCostInfo : PBCodable <NSCopying> {
    struct { unsigned char headlineSlotCost : 1; unsigned char sectionFooterSlotCost : 1; unsigned char sectionTitleSlotCost : 1; } _has;
}

@property (nonatomic) char hasSectionTitleSlotCost;
@property (nonatomic) double sectionTitleSlotCost;
@property (nonatomic) char hasHeadlineSlotCost;
@property (nonatomic) double headlineSlotCost;
@property (nonatomic) char hasSectionFooterSlotCost;
@property (nonatomic) double sectionFooterSlotCost;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
