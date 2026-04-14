@class SIRINLUEXTERNALSystemDialogAct, NSMutableArray;

@interface SIRINLUEXTERNALSystemDialogActGroup : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSystemDialogAct;
@property (retain, nonatomic) SIRINLUEXTERNALSystemDialogAct *systemDialogAct;
@property (retain, nonatomic) NSMutableArray *childActs;

+ (Class)childActsType;

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
- (void)clearChildActs;
- (void)addChildActs:(id)a0;
- (unsigned long long)childActsCount;
- (id)childActsAtIndex:(unsigned long long)a0;

@end
