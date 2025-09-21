@class MXRecognitionSausage, NSMutableArray;

@interface MXRecognitionResult : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasPreItn;
@property (retain, nonatomic) MXRecognitionSausage *preItn;
@property (readonly, nonatomic) char hasPostItn;
@property (retain, nonatomic) MXRecognitionSausage *postItn;
@property (retain, nonatomic) NSMutableArray *preItnNbestChoices;
@property (retain, nonatomic) NSMutableArray *postItnNbestChoices;
@property (retain, nonatomic) NSMutableArray *preItnTokenToPostItnCharAlignments;
@property (retain, nonatomic) NSMutableArray *choiceAlignments;

+ (Class)choiceAlignmentsType;
+ (Class)postItnNbestChoicesType;
+ (Class)preItnNbestChoicesType;
+ (Class)preItnTokenToPostItnCharAlignmentType;

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
