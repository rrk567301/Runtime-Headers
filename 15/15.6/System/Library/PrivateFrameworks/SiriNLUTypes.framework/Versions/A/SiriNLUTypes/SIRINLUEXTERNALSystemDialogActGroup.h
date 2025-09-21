@class SIRINLUEXTERNALSystemDialogAct, NSMutableArray;

@interface SIRINLUEXTERNALSystemDialogActGroup : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasSystemDialogAct;
@property (retain, nonatomic) SIRINLUEXTERNALSystemDialogAct *systemDialogAct;
@property (retain, nonatomic) NSMutableArray *childActs;

+ (Class)childActsType;

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
- (void)addChildActs:(id)a0;
- (id)childActsAtIndex:(unsigned long long)a0;
- (unsigned long long)childActsCount;
- (void)clearChildActs;

@end
