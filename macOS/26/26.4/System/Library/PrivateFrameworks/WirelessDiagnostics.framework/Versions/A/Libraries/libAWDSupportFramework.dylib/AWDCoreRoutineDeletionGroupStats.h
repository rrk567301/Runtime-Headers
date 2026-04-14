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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (void)addRecords:(id)a0;
- (id)recordsAtIndex:(unsigned long long)a0;
- (void)clearRecords;
- (unsigned long long)recordsCount;

@end
