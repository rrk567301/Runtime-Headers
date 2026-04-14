@class NSString, NSMutableArray;

@interface ACProtobufDataclassAction : PBCodable <NSCopying>

@property (nonatomic) int type;
@property (nonatomic) BOOL destructive;
@property (retain, nonatomic) NSMutableArray *affectedContainers;
@property (readonly, nonatomic) BOOL hasUndoAlertTitle;
@property (retain, nonatomic) NSString *undoAlertTitle;
@property (readonly, nonatomic) BOOL hasUndoAlertMessage;
@property (retain, nonatomic) NSString *undoAlertMessage;

+ (Class)affectedContainersType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearAffectedContainers;
- (void)addAffectedContainers:(id)a0;
- (unsigned long long)affectedContainersCount;
- (id)affectedContainersAtIndex:(unsigned long long)a0;

@end
