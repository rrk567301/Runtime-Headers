@class NSString, KHDBEntity, NSMutableArray;

@interface KHDBModelFilterParser : NSObject

@property (retain, nonatomic) NSString *sql;
@property (retain, nonatomic) KHDBEntity *entity;
@property (retain, nonatomic) NSMutableArray *tokens;
@property (nonatomic) long long nextTokenIndex;
@property (nonatomic) unsigned long long nextArgIndex;

+ (id)sqlTokensForString:(id)a0;
+ (int)predicateTypeForString:(id)a0;
+ (id)stringForPredicateType:(int)a0;

- (void)dealloc;
- (id)parsePredicate;
- (id)nextToken;
- (BOOL)atEof;
- (id)peekToken;
- (id)parseFilterOrPredicate;
- (id)parseSetOfLiterals;
- (id)initWithSql:(id)a0 forEntity:(id)a1;
- (id)getToken;
- (id)parseModelFilter;

@end
