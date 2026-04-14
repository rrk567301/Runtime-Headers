@class NSMutableArray;

@interface CPLServerFeedbackRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *messages;

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
- (unsigned long long)messagesCount;
- (void)clearMessages;
- (void)addMessages:(id)a0;
- (id)messagesAtIndex:(unsigned long long)a0;

@end
