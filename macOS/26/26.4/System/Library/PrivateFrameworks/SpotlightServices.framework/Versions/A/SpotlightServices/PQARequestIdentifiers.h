@class NSString;

@interface PQARequestIdentifiers : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasQueryEventId;
@property (retain, nonatomic) NSString *queryEventId;
@property (readonly, nonatomic) BOOL hasUserTurnId;
@property (retain, nonatomic) NSString *userTurnId;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (retain, nonatomic) NSString *sessionId;

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

@end
