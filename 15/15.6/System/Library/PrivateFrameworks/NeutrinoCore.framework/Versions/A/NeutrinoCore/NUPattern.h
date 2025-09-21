@class NSSet, NSArray, NSString;

@interface NUPattern : NSObject

@property (readonly, nonatomic) NSSet *tokens;
@property (readonly, nonatomic) char isFixedOrder;
@property (readonly, nonatomic) NSArray *shortestMatch;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) NSString *stringRepresentation;

+ (id)patternWithString:(id)a0 error:(out id *)a1;
+ (char)scanString:(id)a0 intoPattern:(out id *)a1 error:(out id *)a2;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)match:(id)a0;
- (char)isDetermisitic;
- (char)isEqualToPattern:(id)a0;
- (char)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (id)optimizedPattern;

@end
