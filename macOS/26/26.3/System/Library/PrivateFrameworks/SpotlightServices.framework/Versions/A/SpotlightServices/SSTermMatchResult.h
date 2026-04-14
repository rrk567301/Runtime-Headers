@class NSString, NSArray;

@interface SSTermMatchResult : NSObject

@property (readonly, nonatomic) NSString *term;
@property (readonly, nonatomic) int start;
@property (readonly, nonatomic) int end;
@property (readonly, nonatomic) int score;
@property (readonly, nonatomic) NSArray *pos;

- (id)description;
- (void).cxx_destruct;
- (id)initWithMatch:(id)a0 start:(int)a1 end:(int)a2 score:(int)a3 pos:(id)a4;
- (id)initWithoutMatch:(id)a0;

@end
