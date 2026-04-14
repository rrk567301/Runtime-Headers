@class NSString, NSMutableArray;

@interface LogPushConnection : PBCodable <NSCopying> {
    NSString *_environment;
    NSMutableArray *_messages;
    NSString *_token;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)formattedText;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
