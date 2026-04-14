@class NSMutableArray;

@interface MailIntelligencePETContactEvents : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *contactEvents;

+ (Class)contactEventType;

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
- (void)addContactEvent:(id)a0;
- (void)clearContactEvents;
- (id)contactEventAtIndex:(unsigned long long)a0;
- (unsigned long long)contactEventsCount;

@end
