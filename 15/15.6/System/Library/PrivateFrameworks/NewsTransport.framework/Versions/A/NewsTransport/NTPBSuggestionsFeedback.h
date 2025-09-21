@class NSString, NSMutableArray;

@interface NTPBSuggestionsFeedback : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *grades;
@property (readonly, nonatomic) char hasFeedback;
@property (retain, nonatomic) NSString *feedback;

+ (Class)gradesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addGrades:(id)a0;
- (void)clearGrades;
- (id)gradesAtIndex:(unsigned long long)a0;
- (unsigned long long)gradesCount;

@end
