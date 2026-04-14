@class NSMutableArray;

@interface MXChoiceAlignment : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _postItnChoiceIndices;
}

@property (readonly, nonatomic) unsigned long long postItnChoiceIndicesCount;
@property (readonly, nonatomic) int *postItnChoiceIndices;
@property (retain, nonatomic) NSMutableArray *preItnTokenToPostItnCharAlignments;

+ (Class)preItnTokenToPostItnCharAlignmentsType;

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
- (void)dealloc;
- (void)addPostItnChoiceIndices:(int)a0;
- (void)addPreItnTokenToPostItnCharAlignments:(id)a0;
- (void)clearPostItnChoiceIndices;
- (void)clearPreItnTokenToPostItnCharAlignments;
- (int)postItnChoiceIndicesAtIndex:(unsigned long long)a0;
- (id)preItnTokenToPostItnCharAlignmentsAtIndex:(unsigned long long)a0;
- (unsigned long long)preItnTokenToPostItnCharAlignmentsCount;
- (void)setPostItnChoiceIndices:(int *)a0 count:(unsigned long long)a1;

@end
