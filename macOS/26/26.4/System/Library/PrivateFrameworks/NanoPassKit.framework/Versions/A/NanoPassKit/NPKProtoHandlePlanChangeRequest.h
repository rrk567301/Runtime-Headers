@class NSString, NSMutableArray;

@interface NPKProtoHandlePlanChangeRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasPassID;
@property (retain, nonatomic) NSString *passID;
@property (retain, nonatomic) NSMutableArray *planBytes;

+ (Class)planBytesType;

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
- (void)addPlanBytes:(id)a0;
- (void)clearPlanBytes;
- (id)planBytesAtIndex:(unsigned long long)a0;
- (unsigned long long)planBytesCount;

@end
