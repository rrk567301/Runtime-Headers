@class NSMutableArray;

@interface MXRepeatedItnAlignment : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *itnAlignments;

+ (Class)itnAlignmentType;

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
- (void)addItnAlignment:(id)a0;
- (void)clearItnAlignments;
- (id)itnAlignmentAtIndex:(unsigned long long)a0;
- (unsigned long long)itnAlignmentsCount;

@end
