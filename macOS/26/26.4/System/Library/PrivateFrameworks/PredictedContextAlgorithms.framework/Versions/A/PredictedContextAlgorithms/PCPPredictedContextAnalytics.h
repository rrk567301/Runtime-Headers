@class NSMutableArray;

@interface PCPPredictedContextAnalytics : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *rolledLoiAnalyticsDictionarys;

+ (Class)rolledLoiAnalyticsDictionaryType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)addRolledLoiAnalyticsDictionary:(id)a0;
- (void)clearRolledLoiAnalyticsDictionarys;
- (id)rolledLoiAnalyticsDictionaryAtIndex:(unsigned long long)a0;
- (unsigned long long)rolledLoiAnalyticsDictionarysCount;

@end
