@class NSMutableArray;

@interface BCSHoursPeriodMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *hours;

+ (Class)hoursType;

- (void)addHours:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearHours;
- (id)hoursAtIndex:(unsigned long long)a0;
- (unsigned long long)hoursCount;

@end
