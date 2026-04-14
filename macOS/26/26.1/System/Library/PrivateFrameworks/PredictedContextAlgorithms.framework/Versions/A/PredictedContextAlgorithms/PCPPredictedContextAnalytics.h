@class NSMutableArray;

@interface PCPPredictedContextAnalytics : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *rolledLoiAnalyticsDictionarys;

+ (Class)rolledLoiAnalyticsDictionaryType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addRolledLoiAnalyticsDictionary:(id)a0;
- (void)clearRolledLoiAnalyticsDictionarys;
- (id)rolledLoiAnalyticsDictionaryAtIndex:(unsigned long long)a0;
- (unsigned long long)rolledLoiAnalyticsDictionarysCount;

@end
