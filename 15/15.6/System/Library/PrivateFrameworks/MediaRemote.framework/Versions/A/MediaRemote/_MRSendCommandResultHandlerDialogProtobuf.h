@class NSString, NSMutableArray;

@interface _MRSendCommandResultHandlerDialogProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *actions;
@property (readonly, nonatomic) char hasLocalizedTitle;
@property (retain, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) char hasLocalizedMessage;
@property (retain, nonatomic) NSString *localizedMessage;

+ (Class)actionsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addActions:(id)a0;
- (id)actionsAtIndex:(unsigned long long)a0;
- (unsigned long long)actionsCount;
- (void)clearActions;

@end
