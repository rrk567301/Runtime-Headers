@class NSString, NSArray;

@interface MUIMailboxFilterGroup : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *filters;
@property (readonly, nonatomic) long long combinator;
@property (readonly, nonatomic) long long selectionCardinality;

+ (id)groupWithName:(id)a0 combinator:(long long)a1 selectionCardinality:(long long)a2 filters:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 combinator:(long long)a1 selectionCardinality:(long long)a2 filters:(id)a3;

@end
