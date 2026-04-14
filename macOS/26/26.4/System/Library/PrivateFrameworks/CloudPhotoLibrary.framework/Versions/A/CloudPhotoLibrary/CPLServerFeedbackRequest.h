@class NSMutableArray;

@interface CPLServerFeedbackRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *messages;

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
- (unsigned long long)messagesCount;
- (void)clearMessages;
- (void)addMessages:(id)a0;
- (id)messagesAtIndex:(unsigned long long)a0;

@end
