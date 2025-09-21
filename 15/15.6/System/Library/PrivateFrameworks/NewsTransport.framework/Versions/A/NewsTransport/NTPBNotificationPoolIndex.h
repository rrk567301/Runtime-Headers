@class NTPBDate, NSMutableArray;

@interface NTPBNotificationPoolIndex : PBCodable <NSCopying> {
    struct { unsigned char isPaidVariant : 1; } _has;
}

@property (readonly, nonatomic) char hasCreationDate;
@property (retain, nonatomic) NTPBDate *creationDate;
@property (nonatomic) char hasIsPaidVariant;
@property (nonatomic) char isPaidVariant;
@property (retain, nonatomic) NSMutableArray *entries;

+ (Class)entriesType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)entriesAtIndex:(unsigned long long)a0;
- (void)addEntries:(id)a0;
- (void)clearEntries;
- (unsigned long long)entriesCount;

@end
