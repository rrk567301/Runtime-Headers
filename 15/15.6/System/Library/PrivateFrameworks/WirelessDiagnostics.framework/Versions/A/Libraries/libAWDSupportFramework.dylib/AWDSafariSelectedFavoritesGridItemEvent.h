@interface AWDSafariSelectedFavoritesGridItemEvent : PBCodable <NSCopying> {
    struct { unsigned char itemsPerRow : 1; unsigned char row : 1; unsigned char sectionIndex : 1; unsigned char timestamp : 1; unsigned char displayContext : 1; unsigned char section : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasRow;
@property (nonatomic) unsigned long long row;
@property (nonatomic) char hasItemsPerRow;
@property (nonatomic) unsigned long long itemsPerRow;
@property (nonatomic) char hasSectionIndex;
@property (nonatomic) unsigned long long sectionIndex;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasDisplayContext;
@property (nonatomic) int displayContext;
@property (nonatomic) char hasSection;
@property (nonatomic) int section;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (int)StringAsDisplayContext:(id)a0;
- (int)StringAsSection:(id)a0;
- (id)displayContextAsString:(int)a0;
- (id)sectionAsString:(int)a0;

@end
