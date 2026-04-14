@class NSString, NSMutableArray;

@interface NTPBSuggestionsFeedback : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *grades;
@property (readonly, nonatomic) BOOL hasFeedback;
@property (retain, nonatomic) NSString *feedback;

+ (Class)gradesType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearGrades;
- (void)addGrades:(id)a0;
- (unsigned long long)gradesCount;
- (id)gradesAtIndex:(unsigned long long)a0;

@end
