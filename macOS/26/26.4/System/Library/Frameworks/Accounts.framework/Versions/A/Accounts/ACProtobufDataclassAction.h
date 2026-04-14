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
- (void)addAffectedContainers:(id)a0;
- (id)affectedContainersAtIndex:(unsigned long long)a0;
- (unsigned long long)affectedContainersCount;
- (void)clearAffectedContainers;

@end
