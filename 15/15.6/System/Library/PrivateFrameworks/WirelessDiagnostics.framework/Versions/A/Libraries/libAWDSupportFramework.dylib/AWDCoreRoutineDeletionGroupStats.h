@class NSMutableArray;

@interface AWDCoreRoutineDeletionGroupStats : PBCodable <NSCopying> {
    struct { unsigned char itemType : 1; unsigned char oldestRecordAgeInDays : 1; } _has;
}

@property (nonatomic) char hasItemType;
@property (nonatomic) unsigned int itemType;
@property (nonatomic) char hasOldestRecordAgeInDays;
@property (nonatomic) unsigned int oldestRecordAgeInDays;
@property (retain, nonatomic) NSMutableArray *records;

+ (Class)recordsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addRecords:(id)a0;
- (id)recordsAtIndex:(unsigned long long)a0;
- (void)clearRecords;
- (unsigned long long)recordsCount;

@end
