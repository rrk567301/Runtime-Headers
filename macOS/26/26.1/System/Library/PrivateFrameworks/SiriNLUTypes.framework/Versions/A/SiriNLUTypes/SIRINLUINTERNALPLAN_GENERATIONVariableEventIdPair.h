@class NSString;

@interface SIRINLUINTERNALPLAN_GENERATIONVariableEventIdPair : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasVariable;
@property (retain, nonatomic) NSString *variable;
@property (readonly, nonatomic) BOOL hasEventId;
@property (retain, nonatomic) NSString *eventId;

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

@end
