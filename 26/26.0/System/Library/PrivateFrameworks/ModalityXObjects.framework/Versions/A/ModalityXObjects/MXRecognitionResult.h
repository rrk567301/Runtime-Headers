@class MXRecognitionSausage, NSMutableArray;

@interface MXRecognitionResult : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPreItn;
@property (retain, nonatomic) MXRecognitionSausage *preItn;
@property (readonly, nonatomic) BOOL hasPostItn;
@property (retain, nonatomic) MXRecognitionSausage *postItn;
@property (retain, nonatomic) NSMutableArray *preItnNbestChoices;
@property (retain, nonatomic) NSMutableArray *postItnNbestChoices;
@property (retain, nonatomic) NSMutableArray *preItnTokenToPostItnCharAlignments;
@property (retain, nonatomic) NSMutableArray *choiceAlignments;

+ (Class)choiceAlignmentsType;
+ (Class)postItnNbestChoicesType;
+ (Class)preItnNbestChoicesType;
+ (Class)preItnTokenToPostItnCharAlignmentType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addChoiceAlignments:(id)a0;
- (void)addPostItnNbestChoices:(id)a0;
- (void)addPreItnNbestChoices:(id)a0;
- (void)addPreItnTokenToPostItnCharAlignment:(id)a0;
- (id)choiceAlignmentsAtIndex:(unsigned long long)a0;
- (unsigned long long)choiceAlignmentsCount;
- (void)clearChoiceAlignments;
- (void)clearPostItnNbestChoices;
- (void)clearPreItnNbestChoices;
- (void)clearPreItnTokenToPostItnCharAlignments;
- (id)postItnNbestChoicesAtIndex:(unsigned long long)a0;
- (unsigned long long)postItnNbestChoicesCount;
- (id)preItnNbestChoicesAtIndex:(unsigned long long)a0;
- (unsigned long long)preItnNbestChoicesCount;
- (id)preItnTokenToPostItnCharAlignmentAtIndex:(unsigned long long)a0;
- (unsigned long long)preItnTokenToPostItnCharAlignmentsCount;

@end
