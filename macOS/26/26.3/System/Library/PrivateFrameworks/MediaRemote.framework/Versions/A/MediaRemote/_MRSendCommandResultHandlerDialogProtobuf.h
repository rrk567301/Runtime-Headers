@class NSString, NSMutableArray;

@interface _MRSendCommandResultHandlerDialogProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *actions;
@property (readonly, nonatomic) BOOL hasLocalizedTitle;
@property (retain, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL hasLocalizedMessage;
@property (retain, nonatomic) NSString *localizedMessage;

+ (Class)actionsType;

- (id)dictionaryRepresentation;
- (void)clearActions;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)actionsCount;
- (unsigned long long)hash;
- (void)addActions:(id)a0;
- (id)actionsAtIndex:(unsigned long long)a0;

@end
