@class NSMutableArray;

@interface CloudFamilyAnalysisPETContactEvents : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *contactEvents;

+ (Class)contactEventType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearContactEvents;
- (void)addContactEvent:(id)a0;
- (unsigned long long)contactEventsCount;
- (id)contactEventAtIndex:(unsigned long long)a0;

@end
