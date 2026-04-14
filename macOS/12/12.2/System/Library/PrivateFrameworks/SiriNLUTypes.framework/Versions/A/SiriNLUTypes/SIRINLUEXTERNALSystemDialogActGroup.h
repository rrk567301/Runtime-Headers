@class SIRINLUEXTERNALSystemDialogAct, NSMutableArray;

@interface SIRINLUEXTERNALSystemDialogActGroup : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSystemDialogAct;
@property (retain, nonatomic) SIRINLUEXTERNALSystemDialogAct *systemDialogAct;
@property (retain, nonatomic) NSMutableArray *childActs;

+ (Class)childActsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addChildActs:(id)a0;
- (unsigned long long)childActsCount;
- (void)clearChildActs;
- (id)childActsAtIndex:(unsigned long long)a0;

@end
