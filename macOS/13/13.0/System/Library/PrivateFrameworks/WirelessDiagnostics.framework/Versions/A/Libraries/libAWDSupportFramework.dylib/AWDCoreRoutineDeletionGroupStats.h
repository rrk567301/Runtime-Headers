@class NSMutableArray;

@interface AWDCoreRoutineDeletionGroupStats : PBCodable <NSCopying> {
    struct { unsigned char itemType : 1; unsigned char oldestRecordAgeInDays : 1; } _has;
}

@property (nonatomic) BOOL hasItemType;
@property (nonatomic) unsigned int itemType;
@property (nonatomic) BOOL hasOldestRecordAgeInDays;
@property (nonatomic) unsigned int oldestRecordAgeInDays;
@property (retain, nonatomic) NSMutableArray *records;

+ (Class)recordsType;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearRecords;
- (void)addRecords:(id)a0;
- (unsigned long long)recordsCount;
- (id)recordsAtIndex:(unsigned long long)a0;

@end
