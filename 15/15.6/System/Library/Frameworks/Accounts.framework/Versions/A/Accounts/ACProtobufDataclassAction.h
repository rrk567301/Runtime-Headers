@class NSString, NSMutableArray;

@interface ACProtobufDataclassAction : PBCodable <NSCopying>

@property (nonatomic) int type;
@property (nonatomic) char destructive;
@property (retain, nonatomic) NSMutableArray *affectedContainers;
@property (readonly, nonatomic) char hasUndoAlertTitle;
@property (retain, nonatomic) NSString *undoAlertTitle;
@property (readonly, nonatomic) char hasUndoAlertMessage;
@property (retain, nonatomic) NSString *undoAlertMessage;

+ (Class)affectedContainersType;

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
- (void)addAffectedContainers:(id)a0;
- (id)affectedContainersAtIndex:(unsigned long long)a0;
- (unsigned long long)affectedContainersCount;
- (void)clearAffectedContainers;

@end
