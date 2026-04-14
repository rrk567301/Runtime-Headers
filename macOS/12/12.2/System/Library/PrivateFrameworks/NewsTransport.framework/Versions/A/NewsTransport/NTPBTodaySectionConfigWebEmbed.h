@class NSString;

@interface NTPBTodaySectionConfigWebEmbed : PBCodable <NSCopying> {
    struct { unsigned char preferredSlotAllocation : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUrlString;
@property (retain, nonatomic) NSString *urlString;
@property (nonatomic) BOOL hasPreferredSlotAllocation;
@property (nonatomic) unsigned long long preferredSlotAllocation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
