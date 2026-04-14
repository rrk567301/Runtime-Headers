@class NSMutableArray;

@interface BCSHoursPeriodMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *hours;

+ (Class)hoursType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)addHours:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearHours;
- (id)hoursAtIndex:(unsigned long long)a0;
- (unsigned long long)hoursCount;

@end
