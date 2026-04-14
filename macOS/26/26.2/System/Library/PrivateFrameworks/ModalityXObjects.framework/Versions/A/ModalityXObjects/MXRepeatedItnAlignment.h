@class NSMutableArray;

@interface MXRepeatedItnAlignment : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *itnAlignments;

+ (Class)itnAlignmentType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addItnAlignment:(id)a0;
- (void)clearItnAlignments;
- (id)itnAlignmentAtIndex:(unsigned long long)a0;
- (unsigned long long)itnAlignmentsCount;

@end
