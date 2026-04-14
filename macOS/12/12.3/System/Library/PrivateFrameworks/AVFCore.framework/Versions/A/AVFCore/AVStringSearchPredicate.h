@class NSString;

@interface AVStringSearchPredicate : AVSearchPredicate

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) unsigned long long comparisonOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithString:(id)a0 comparisonOptions:(unsigned long long)a1;

@end
