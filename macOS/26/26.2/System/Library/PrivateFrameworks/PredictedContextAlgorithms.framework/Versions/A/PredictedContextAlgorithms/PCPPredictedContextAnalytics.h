@class NSMutableArray;

@interface PCPPredictedContextAnalytics : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *rolledLoiAnalyticsDictionarys;

+ (Class)rolledLoiAnalyticsDictionaryType;

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
- (void)addRolledLoiAnalyticsDictionary:(id)a0;
- (void)clearRolledLoiAnalyticsDictionarys;
- (id)rolledLoiAnalyticsDictionaryAtIndex:(unsigned long long)a0;
- (unsigned long long)rolledLoiAnalyticsDictionarysCount;

@end
