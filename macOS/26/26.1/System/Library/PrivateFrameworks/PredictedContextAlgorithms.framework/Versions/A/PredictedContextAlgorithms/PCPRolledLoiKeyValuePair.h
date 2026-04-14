@class NSData, PCPRolledLoiAnalytics;

@interface PCPRolledLoiKeyValuePair : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *identifier;
@property (retain, nonatomic) PCPRolledLoiAnalytics *analytics;

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
