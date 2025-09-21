@class NSString, NSArray, NSMutableArray;

@interface CDMToken : NSObject

@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) long long begin;
@property (readonly, nonatomic) long long end;
@property (readonly, nonatomic) char isSignificant;
@property (readonly, nonatomic) char isWhiteSpace;
@property (readonly, nonatomic) NSArray *cleanValues;
@property (readonly, nonatomic, getter=getHasCleanValues) char hasCleanValues;
@property (readonly, nonatomic) NSString *cleanValue;
@property (readonly, nonatomic) long long tokenIndex;
@property (readonly, nonatomic) long long nonWhitespaceTokenIndex;
@property (readonly, nonatomic) NSMutableArray *normalizedValues;

+ (id)getTokenWith:(id)a0 cleanValue:(id)a1 normalizedValues:(id)a2 isSignificant:(BOOL)a3 isWhitespace:(BOOL)a4;

- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithValue:(id)a0;
- (void)addNormalizedValue:(id)a0;
- (char)hasValue:(id)a0 from:(long long)a1 to:(long long)a2;
- (id)initWithProtoToken:(id)a0;
- (id)initWithValue:(id)a0 begin:(long long)a1 end:(long long)a2;
- (id)initWithValue:(id)a0 begin:(long long)a1 end:(long long)a2 significant:(char)a3;
- (id)initWithValue:(id)a0 begin:(long long)a1 end:(long long)a2 significant:(char)a3 whitespace:(char)a4;
- (id)initWithValue:(id)a0 begin:(long long)a1 end:(long long)a2 significant:(char)a3 whitespace:(char)a4 cleanValue:(id)a5;
- (id)initWithValue:(id)a0 begin:(long long)a1 end:(long long)a2 significant:(char)a3 whitespace:(char)a4 cleanValue:(id)a5 tokenIndex:(long long)a6 nonWhitespaceTokenIndex:(long long)a7;
- (id)initWithValue:(id)a0 begin:(long long)a1 end:(long long)a2 significant:(char)a3 whitespace:(char)a4 cleanValue:(id)a5 tokenIndex:(long long)a6 nonWhitespaceTokenIndex:(long long)a7 normalizedValues:(id)a8;

@end
