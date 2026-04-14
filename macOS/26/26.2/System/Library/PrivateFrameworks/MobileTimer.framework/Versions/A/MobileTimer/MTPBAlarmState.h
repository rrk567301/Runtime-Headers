@class NSMutableArray;

@interface MTPBAlarmState : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *alarms;

+ (Class)alarmsType;

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
- (void)addAlarms:(id)a0;
- (id)alarmsAtIndex:(unsigned long long)a0;
- (unsigned long long)alarmsCount;
- (void)clearAlarms;

@end
