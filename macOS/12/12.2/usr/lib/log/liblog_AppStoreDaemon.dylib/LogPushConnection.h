@class NSString, NSMutableArray;

@interface LogPushConnection : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEnvironment;
@property (retain, nonatomic) NSString *environment;
@property (readonly, nonatomic) BOOL hasToken;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSMutableArray *messages;

+ (Class)messagesType;
+ (id)connectionWithEnvironment:(id)a0 token:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)formattedText;
- (unsigned long long)messagesCount;
- (void)clearMessages;
- (void)addMessages:(id)a0;
- (id)messagesAtIndex:(unsigned long long)a0;

@end
