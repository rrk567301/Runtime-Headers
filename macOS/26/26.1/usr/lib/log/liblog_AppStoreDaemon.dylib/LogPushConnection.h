@class NSString, NSMutableArray;

@interface LogPushConnection : PBCodable <NSCopying> {
    NSString *_environment;
    NSMutableArray *_messages;
    NSString *_token;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)formattedText;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
