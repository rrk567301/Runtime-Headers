@interface TLKTableColumnAlignment : TLKObject

@property (nonatomic) unsigned long long columnAlignment;
@property (nonatomic) long long dataAlignment;
@property (nonatomic) char isEqualWidth;

- (id)description;
- (long long)textAlignment;

@end
