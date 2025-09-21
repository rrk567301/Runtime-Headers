@class NSString, NSMutableArray;

@interface LogPushConnection : PBCodable <NSCopying> {
    NSString *_environment;
    NSMutableArray *_messages;
    NSString *_token;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)formattedText;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
